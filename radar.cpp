#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
#define debug false

typedef struct ilhas {
    double min, max;
    int x, y;
} ilhas;

bool cmp(ilhas x, ilhas y) {
    bool a = (x.x < y.x);
    return a;
}

int main() {

    int n, d, t = 0;
    while(cin >> n >> d, n, d) {
        vector<ilhas> ilha;
        int ans = 1;

        for(int i = 0; i < n; i++) {
            int x, y;

            cin >> x >> y;
            ilhas aux;

            aux.x = x;
            aux.y = y;
            ilha.push_back(aux);
        }

        stable_sort(ilha.begin(), ilha.end(), cmp);

        for(int i = 0; i < n; i++) {
            if(ilha[i].y > d) {
                ans = -1;
                break;
            } else {
                double z = sqrt(d*d - ilha[i].y * ilha[i].y);
                ilha[i].min = ilha[i].x - z;
                ilha[i].max = ilha[i].x + z;
            }
        }

        if (ans != -1) {
            if (debug)
                for(int i = 0; i < n; i++) {
                    cout << "Ilha " << i << " min=" << ilha[i].min << " max=" << ilha[i].max << endl;
                }


            int min = ilha[0].max;
            if (debug) {
                cout << "0" <<" min " << min ;
                cout << "ans " << ans << endl;
            }
            for(int i = 1; i < n; i++) {
                if(ilha[i].min > min ) {
                    ans++;
                    min = ilha[i].max;
                }
                if(ilha[i].max < min) {
                    min = ilha[i].max;
                }
                if (debug) {
                    cout << i <<" min " << min ;
                    cout << " ans " << ans << endl;
                }
            }
        }
        cout << "Case " << ++t << ": " << ans << endl;
    }
}

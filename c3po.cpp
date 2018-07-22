#include <iostream>
#include <string.h>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    int p, l, n;
    map<string, string> dict;
    vector<string> v;

    cin >> n;
    for (int h = 0; h < n; h++) {
        cin >> p >> l;
        for (int i = 0; i < p; i++) {
            string pt, tt;
            cin >> tt;
            cin.ignore();
            getline(cin, pt);
            dict[tt] = pt;
        }

        string pal, line;
        for (int i = 0; i < l; i++) {
            getline(cin, line);

            for (int j = 0; j < strlen(line.c_str()); j++) {
                if (line[j] != ' ') {
                    pal += line[j];
                } else {
                    v.push_back(pal);
                    pal.clear();
                }
            }

            if (pal != "") {
                v.push_back(pal);
                pal.clear();
            }

            for(vector<string>::iterator it=v.begin(); it != v.end(); it++) {
                string la;
                la = *it;
                if (dict.count(la)) {
                    cout << dict[la];
                } else {
                    cout << la;
                }
                if (it != v.end()) { cout << ' ';}
            }
            v.clear();
            cout << endl;
        }
    }
    dict.clear();
}

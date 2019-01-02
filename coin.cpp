#include <iostream>
using namespace std;

int main() {

    int t;

    cin >> t;
    while(t--) {
        int n;

        cin >> n;
        int coins[n];
        for(int i = 0; i < n; i++) {
            cin >> coins[i];
        }

        if(n <= 2) {
            cout << n << endl;
        } else {
            int soma = coins[0];
            int k = 0;
            for(int i = 1; i < n-1; i++) {
                if(soma + coins[i] < coins[i+1] ) {
                    soma += coins[i];
                    k++;
                }
            }
            cout << k + 2 << endl;
        }
    }
}

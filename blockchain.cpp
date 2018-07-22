#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
    int c, t;
    cin >> c >> t;
    map<string, double> cart;
    for (int i = 0; i < c; i++) {
        string k;
        double s;

        cin >> k >> s;
        cart[k] = s;
    }

    cout.precision(6);
    for (int i = 0; i < t; i++) {
        string orig, dest;
        double val;

        cin >> orig >> dest >> val;
        map<string, double>::iterator it = cart.find(orig);
        it->second -= val;

        it = cart.find(dest);
        it->second += val;
    }

    for(map<string,double>::iterator it=cart.begin(); it != cart.end(); it++) {
                cout << it->first << fixed << " " << it->second << fixed << endl;

    }

}


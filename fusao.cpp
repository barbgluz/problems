#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    int n, num;
    vector<int>v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
        while ( *(it+1) == *it+1 ) {
            it++;
        }
        cout << *it << endl;
    }
}

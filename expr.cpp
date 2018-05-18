#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> p;
    string c;

    cin >> c;

    cout << c.size() << endl;

    for (int i = 0; i < c.size(); i++) {
        switch(c[i]) {
            case '{':
                p.push(c[i]);
            break;

            case '(':
                p.push(c[i]);
            break;

            case '[':
                p.push(c[i]);
            break;

            case '}':
                if(!p.empty() && p.top() == '{') {
                    p.pop();
                } else {
                    cout << "MAL" << endl;
                    return 0;
                }
            break;

            case ')':
                if(!p.empty() && p.top() == '(') {
                    p.pop();
                } else {
                    cout << "MAL" << endl;
                    return 0;
                }
            break;

            case ']':
                if(!p.empty() && p.top() == '[') {
                    p.pop();
                } else {
                    cout << "MAL" << endl;
                    return 0;
                }
            break;
        }
    }

    if(p.empty()) {
        cout << "BEM" << endl;
        return 1;
    } else {
        cout << "MAL" << endl;
        return 0;
    }
}

#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if(a>=x) {
            a -= x;
            x = 0;
        }
        else {
            x -= a;
            a = 0;
        }
        if(b>=y) {
            b -= y;
            y = 0;
        }
        else {
            y -= b;
            b = 0;
        }
        if(x+y <= c) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
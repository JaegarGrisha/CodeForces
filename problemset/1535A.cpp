#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a>b && c>d && a>d && c>b) || (a>b && c<d && a>c && d>b) || (a<b && c<d && b>c && d>a) || (a<b && c>d && b>d && c>a)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
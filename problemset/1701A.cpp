#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d) {
            if(a==0) {
                cout << 0 << endl;
            }
            else {
                cout << 2 << endl;
            }
        }
        else {
            cout << 1 << endl;
        }
    }
    return 0;
}
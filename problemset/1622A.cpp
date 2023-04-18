#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool possible = false;
        if(a==b && b==c) {
            if(a%2==0) {
                possible = true;
            }
        }
        else if(a==b) {
            if(c%2==0) {
                possible = true;
            }
        }
        else if(b==c) {
            if(a%2==0) {
                possible = true;
            }
        }
        else if(a==c) {
            if(b%2==0) {
                possible = true;
            }
        }
        else {
            if(a+b==c || b+c==a || c+a==b) {
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
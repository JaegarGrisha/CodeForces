#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = n%7;
        int y = n%10;
        if(x==0) {
            cout << n << endl;
            continue;
        }
        else {
            if(y+(7-x) >= 10) {
                cout << n - x << endl;
            }
            else {
                cout << n + (7-x) << endl;
            }
        }
    }
    return 0;
}
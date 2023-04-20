#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n==1) {
            cout << -1 << endl;
        }
        else {
            int digits_sum = (n-1)*2 + 3;
            if(digits_sum%3==0) {
                for(int i=0; i<n-2; i++) {
                    cout << 2;
                }
                cout << 33 << endl;
            }
            else {
                for(int i=0; i<n-1; i++) {
                    cout << 2;
                }
                cout << 3 << endl;
            }
        }
    }
    return 0;
}
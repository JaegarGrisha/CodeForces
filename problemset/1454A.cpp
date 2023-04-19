#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%2==0) {
            for(int i=0; i<n; i++) {
                cout << n-i << " ";
            }
            cout << endl;
        }
        else {
            for(int i=0; i<n; i++) {
                if(i==0) {
                    cout << n/2+1 << " ";
                }
                else if(i==n/2) {
                    cout << n << " ";
                }
                else {
                    cout << n-i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
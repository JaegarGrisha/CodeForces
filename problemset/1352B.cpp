#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(n%2==0) {
            if(k%2==0) {
                if(k>n) {
                    cout << "NO" << endl;
                    continue;
                }
                else {
                    cout << "YES" << endl;
                    for(int i=0; i<k-1; i++) {
                        cout << "1 ";
                    }
                    cout << n-k+1 << endl;
                }
            }
            else {
                if(2*k>n) {
                    cout << "NO" << endl;
                    continue;
                }
                else {
                    cout << "YES" << endl;
                    for(int i=0; i<k-1; i++) {
                        cout << "2 ";
                    }
                    cout << n-(k-1)*2 << endl;
                }
            }
        }
        else {
            if(k%2==0) {
                cout << "NO" << endl;
            }
            else {
                if(k>n) {
                    cout << "NO" << endl;
                    continue;
                }
                else {
                    cout << "YES" << endl;
                    for(int i=0; i<k-1; i++) {
                        cout << "1 ";
                    }
                    cout << n-k+1 << endl;
                }
            }
        }
    }
    return 0;
}
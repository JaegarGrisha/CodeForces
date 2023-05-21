#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i=0; i<=n; i++) {
        for(int j=i; j<n; j++) {
            cout << "  ";
        }
        for(int j=0; j<i; j++) {
            cout << j << " ";
        }
        for(int j=i; j>=0; j--) {
            cout << j << (j==0 ? "" : " ");
        }
        cout << endl;
    }
    for(int i=n-1; i>=0; i--) {
        for(int j=i; j<n; j++) {
            cout << "  ";
        }
        for(int j=0; j<i; j++) {
            cout << j << " ";
        }
        for(int j=i; j>=0; j--) {
            cout << j << (j==0 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
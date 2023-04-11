#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if(n==1 || n==2) {
            cout << 1 << endl;
            continue;
        }
        cout << (n-2-1)/x + 2 << endl;
    }
    return 0;
}
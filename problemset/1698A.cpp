#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        for(int i=0; i<n; i++) {
            cin >> x;
        }
        cout << x << endl;
    }
    return 0;
}
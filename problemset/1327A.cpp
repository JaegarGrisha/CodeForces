#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        bool possible = true;
        if(n<k*k) {
            possible = false;
        }
        else {
            if(n%2!=k%2) { 
                possible = false;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
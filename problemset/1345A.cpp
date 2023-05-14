#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        bool possible = false;
        if(n==1 || m==1) {
            possible = true;
        }
        else if(n==2 && m==2) {
            possible = true;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
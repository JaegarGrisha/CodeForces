#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        bool possible = false;
        if(n==1) {
            possible = true;
        }
        else if(n==2) {
            if(s[0]!=s[1]) {
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        bool possible = true;
        if(n>=4) {
            if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0') {
                possible = true;
            }
            else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0') {
                possible = true;
            }
            else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0') {
                possible = true;
            }
            else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') {
                possible = true;
            }
            else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') {
                possible = true;
            }
            else {
                possible = false;
            }
        }
        else {
            possible = false;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    string pi = "3141592653589793238462643383279502884197";
    int t;
    cin >> t;
    string s;
    int i;
    while(t--) {
        cin >> s;
        for(i=0; i<s.length(); i++) {
            if(s[i]!=pi[i]) {
                break;
            }
        }
        cout << i << endl;
    }
    return 0;
}
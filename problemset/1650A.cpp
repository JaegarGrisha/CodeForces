#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        char c;
        cin >> s >> c;
        int left, right;
        bool possible = false;
        for(int i=0; i<s.length(); i++) {
            if(s[i]==c) {
                left = i;
                right = s.length() - i - 1;
                if(left%2==0 && right%2==0) {
                    possible = true;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
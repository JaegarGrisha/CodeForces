#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool is_square = true;
        if(s.length()%2==0) {
            int x = s.length()/2;
            for(int i=0, j=x; i<x && j<s.length(); i++, j++) {
                if(s[i]!=s[j]) {
                    is_square = false;
                    break;
                }
            }
        }
        else {
            is_square = false;
        }
        cout << (is_square ? "YES" : "NO") << endl;
    }
    return 0;
}
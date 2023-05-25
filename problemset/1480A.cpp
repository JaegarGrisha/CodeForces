#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++) {
            if(i%2==0) {
                // alice's turn
                s[i] = (s[i]=='a' ? 'b' : 'a');
            }
            else {
                // bob's turn
                s[i] = (s[i]=='z' ? 'y' : 'z');
            }
        }
        cout << s << endl;
    }
    return 0;
}
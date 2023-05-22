#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool is_substring = true;
        if(s[0]=='Y') {
            for(int i=0; i<s.length(); i++) {
                is_substring = ((i%3==0 && s[i]=='Y') || (i%3==1 && s[i]=='e') || (i%3==2 && s[i]=='s'));
                if(!is_substring) {
                    break;
                }
            }
        }
        else if(s[0]=='e') {
            for(int i=0; i<s.length(); i++) {
                is_substring = ((i%3==0 && s[i]=='e') || (i%3==1 && s[i]=='s') || (i%3==2 && s[i]=='Y'));
                if(!is_substring) {
                    break;
                }
            }
        }
        else if(s[0]=='s') {
            for(int i=0; i<s.length(); i++) {
                is_substring = ((i%3==0 && s[i]=='s') || (i%3==1 && s[i]=='Y') || (i%3==2 && s[i]=='e'));
                if(!is_substring) {
                    break;
                }
            }
        }
        else {
            is_substring = false;
        }
        cout << (is_substring ? "YES" : "NO") << endl;
    }
    return 0;
}
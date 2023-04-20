#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool appear_twice[26];
        bool appear_once[26];
        for(int i=0; i<26; i++) {
            appear_once[i] = appear_twice[i] = false;
        }
        for(char c: s) {
            if(appear_once[c-'a']) {
                appear_once[c-'a'] = false;
                appear_twice[c-'a'] = true;
            }
            else {
                appear_once[c-'a'] = true;
            }
        }
        string output = "";
        for(int i=0; i<26; i++) {
            if(appear_twice[i]) {
                output += ('a'+i);
            }
        }
        output = output + output;
        for(int i=0; i<26; i++) {
            if(appear_once[i]) {
                output += ('a'+i);
            }
        }
        cout << output << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    string s = "codeforces";
    bool appears[26];
    for(int i=0; i<26; i++) {
        appears[i] = false;
    }
    for(char c: s) {
        appears[c-'a'] = true;
    }
    int t;
    cin >> t;
    while(t--) {
        char c;
        cin >> c;
        cout << (appears[c-'a'] ? "YES" : "NO") << endl;
    }
    return 0;
}
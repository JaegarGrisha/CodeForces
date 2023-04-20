#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        int count_chars[26];
        for(int i=0; i<26; i++) {
            count_chars[i] = 0;
        }
        for(int i=0; i<n; i++) {
            cin >> s;
            for(char c: s) {
                count_chars[c-'a']++;
            }
        }
        bool possible = true;
        for(int i=0; i<26; i++) {
            if(count_chars[i]%n!=0) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
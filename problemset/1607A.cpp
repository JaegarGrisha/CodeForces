#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int pos[26];
        for(int i=0; i<26; i++) {
            pos[s[i]-'a'] = i;
        }
        string word;
        cin >> word;
        int total_dist = 0;
        int cur_pos = pos[word[0]-'a'];
        for(char c: word) {
            total_dist += abs(cur_pos-pos[c-'a']);
            cur_pos = pos[c-'a'];
        }
        cout << total_dist << endl;
    }
    return 0;
}
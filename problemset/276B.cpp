#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count_chars[26];
    for(int i=0; i<26; i++) {
        count_chars[i] = 0;
    }
    for(char c: s) {
        count_chars[c-'a']++;
    }
    int count_evens = 0, count_odds = 0;
    for(int i=0; i<26; i++) {
        if(count_chars[i]%2==0) {
            count_evens++;
        }
        else {
            count_odds++;
        }
    }
    if(count_odds<=1) {
        cout << "First" << endl;
    }
    else {
        if(s.length()%2==1) {
            cout << "First" << endl;
        }
        else {
            cout << "Second" << endl;
        }
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count = 0;
        bool a[26];
        for(int i=0; i<26; i++) {
            a[i] = false;
        }
        int idx = 0;
        int days_count = 0;
        for(int i=0; i<s.length(); i++) {
            idx = s[i] - 'a';
            if(a[idx]==false) {
                a[idx] = true;
                count++;
            }
            if(count==4) {
                for(int j=0; j<26; j++) {
                    a[j] = false;
                }
                a[idx] = true;
                count = 1;
                days_count++;
            }
        }
        if(count > 0) {
            days_count++;
        }
        cout << days_count << endl;
    }
    return 0;
}
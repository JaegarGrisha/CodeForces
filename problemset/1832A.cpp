#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        int arr[26];
        for(int i=0; i<26; i++) {
            arr[i] = 0;
        }
        int num_diff_chars = 0;
        for(int i=0; i<n; i++) {
            arr[s[i]-'a']++;
        }
        for(int i=0; i<26; i++) {
            if(arr[i]>0) {
                num_diff_chars++;
            }
        }
        bool possible = true;
        if(s.length()%2==0) {
            // even length
            if(num_diff_chars==1) {
                possible = false;
            }
        }
        else {
            if(num_diff_chars==1) {
                possible = false;
            }
            else if(num_diff_chars==2) {
                for(int i=0; i<26; i++) {
                    if(arr[i]==1) {
                        possible = false;
                        break;
                    }
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
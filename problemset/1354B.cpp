#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        int chars[n];
        int counts[n];
        memset(chars, 0, n*sizeof(int));
        memset(counts, 0, n*sizeof(int));
        int prev_char = s[0];
        chars[0] = prev_char - '0';
        counts[0] = 1;
        for(int i=1, j=0; i<n; i++) {
            if(prev_char==s[i]) {
                counts[j]++;
            }
            else {
                j++;
                chars[j] = s[i] - '0';
                counts[j] = 1;
            }
            prev_char = s[i];
        }
        int min_len = n+1;
        for(int i=1; i<n-1; i++) {
            if(chars[i]!=chars[i-1] && chars[i]!=chars[i+1] && chars[i-1]!=chars[i+1] && chars[i+1]!=0) {
                min_len = min(counts[i]+2, min_len);
            }
        }
        cout << (min_len==n+1 ? 0 : min_len) << endl;
    }
    return 0;
}
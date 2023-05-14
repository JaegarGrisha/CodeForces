#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        if(b>=0) {
            cout << n*(a+b) << endl;
        }
        else {
            int count[2] = {0, 0}, count_groups[2] = {0, 0};
            char prev_char = 'a';
            for(int i=0; i<n; i++) {
                if(prev_char!=s[i]) {
                    count_groups[s[i]-'0']++;
                }
                prev_char = s[i];
                count[s[i]-'0']++;
            }
            cout << n*a + b*(min(count_groups[0], count_groups[1])+1) << endl;
        }
    }
    return 0;
}
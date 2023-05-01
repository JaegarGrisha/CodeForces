#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> zero_pos;
        for(int i=0; i<n; i++) {
            if(s[i]=='0') { 
                if(i<n-1 && s[i+1]=='0') {
                    continue;
                }
                zero_pos.push_back(i);
            }
        }
        int last_pos = -1;
        int idx;
        for(int cur_pos: zero_pos) {
            for(int i=last_pos+1; i<cur_pos-2; i++) {
                cout << (char)('a'+s[i]-'1');
            }
            idx = (s[cur_pos-2]-'0')*10+(s[cur_pos-1]-'0');
            cout << (char)('a'+idx-1);
            last_pos = cur_pos;
        }
        for(int i=last_pos+1; i<n; i++) {
            cout << (char)('a'+s[i]-'1');
        }
        cout << endl;
    }
    return 0;
}
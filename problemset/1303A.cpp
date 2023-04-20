#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int first_pos = -1, last_pos = -1;
        bool first = true;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='1') {
                if(first) {
                    first_pos = i;
                    first = false;
                }
                last_pos = i;
            }
        }
        int count_zeros = 0;
        if(first_pos!=-1) {
            for(int i=first_pos; i<=last_pos; i++) {
                if(s[i]=='0') {
                    count_zeros++;
                }
            }
        }
        cout << count_zeros << endl;
    }
}
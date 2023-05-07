#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count_0 = 0, count_1 = 0;
        for(char c: s) {
            if(c=='0') {
                count_0++;
            }
            else {
                count_1++;
            }
        }
        if(s.length()<=2 || count_0==0 || count_1==0) {
            cout << 0 << endl;
        }
        else {
            if(count_0==count_1) {
                cout << count_0-1 << endl;
            }
            else {
                cout << min(count_0, count_1) << endl;
            }
        }
    }
    return 0;
}
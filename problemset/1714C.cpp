#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s = "";
        int cur = 9;
        while(n!=0) {
            if(n>=cur) {
                s = to_string(cur) + s;
                n -= cur;
                cur--;
            }
            else {
                s = to_string(n) + s;
                n = 0;
            }
        }
        cout << s << endl;
    }
}
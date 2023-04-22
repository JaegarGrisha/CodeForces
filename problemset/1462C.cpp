#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n>45) {
            cout << -1 << endl;
        }
        else {
            string s = "";
            int x = 9;
            while(n>0) {
                if(n>=x) {
                    s = to_string(x) + s;
                    n -= x;
                    x--;
                }
                else {
                    s = to_string(n) + s;
                    n = 0;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
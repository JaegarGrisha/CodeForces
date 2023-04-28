#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int max_val = 0;
        for(char c: s) {
            max_val = max(max_val, c-'a'+1);
        }
        cout << max_val << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string m = "codeforces";
        int count = 0;
        for(int i=0; i<10; i++) {
            if(s[i]!=m[i]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
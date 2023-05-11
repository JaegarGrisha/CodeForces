#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        string new_s = "";
        for(char c: s) {
            if(c>='A' && c<='Z') {
                new_s += (char)(c-'A'+'a');
            }
            else {
                new_s += c;
            }
        }
        int i=0;
        int count;
        bool possible = true;
        for(char c: "meow") {
            count = 0;
            while(new_s[i]==c) {
                count++;
                i++;
            }
            if(count<=0) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
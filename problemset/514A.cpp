#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(i==0) {
            if(s[i]<='4' || s[i]=='9') {
                cout << s[i];
            }
            else {
                cout << (char)(9-(s[i]-'0')+'0');
            }
        }
        else {
            if(s[i]<='4') {
                cout << s[i];
            }
            else {
                cout << (char)(9-(s[i]-'0')+'0');
            }
        }
    }
    cout << endl;
    return 0;
}
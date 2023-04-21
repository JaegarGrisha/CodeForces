#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = "", b = "";
        bool found_greater = false; // construct a,b such that a>b
        for(char c: s) {
            if(found_greater) {
                a += '0';
                b += c;
            }
            else {
                if(c=='2') {
                    a += '1';
                    b += '1';
                }
                else if(c=='0') {
                    a += '0';
                    b += '0';
                }
                else {
                    found_greater = true;
                    a += '1';
                    b += '0';
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}
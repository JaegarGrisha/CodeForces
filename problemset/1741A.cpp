#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        char output;
        char a_c = a[a.length()-1];
        char b_c = b[b.length()-1];
        if(a_c==b_c) {
            if(a_c=='M') {
                output = '=';
            }
            else {
                if(a.length()==b.length()) {
                    output = '=';
                }
                else if(a.length()>b.length()) {
                    output = a_c=='S' ? '<' : '>';
                }
                else {
                    output = a_c=='S' ? '>' : '<';
                }
            }
        }
        else {
            if(a_c=='S') {
                output = '<';
            }
            else if(a_c=='M') {
                if(b_c=='S') {
                    output = '>';
                }
                else {
                    output = '<';
                }
            }
            else {
                output = '>';
            }
        }
        cout << output << endl;
    }
    return 0;
}
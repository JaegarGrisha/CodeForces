#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string row1, row2;
        cin >> n >> row1 >> row2;
        string mod_row1 = "", mod_row2 = "";
        for(char c: row1) {
            if(c=='R' || c=='G') {
                mod_row1 += c;
            }
            else if(c=='B') {
                mod_row1 += 'G';
            }
        }
        for(char c: row2) {
            if(c=='R' || c=='G') {
                mod_row2 += c;
            }
            else if(c=='B') {
                mod_row2 += 'G';
            }
        }
        if(mod_row1==mod_row2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
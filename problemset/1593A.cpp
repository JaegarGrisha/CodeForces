#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int to_win = max(a, max(b, c));
        if(a!=to_win && b!=to_win) { 
            // c is the clear winner
            to_win++;
            cout << to_win - a << " " << to_win - b << " 0" << endl;
        }
        else if(b!=to_win && c!=to_win) {
            // a is the clear winner
            to_win++;
            cout << "0 " << to_win - b << " " << to_win - c << endl;
        }
        else if(c!=to_win && a!=to_win) {
            // b is the clear winner
            to_win++;
            cout << to_win - a << " 0 " << to_win - c << endl;
        }
        else {
            to_win++;
            cout << to_win - a << " " << to_win - b << " " << to_win - c << endl;
        }
    }
    return 0;
}
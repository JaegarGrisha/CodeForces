#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int num_moves;
        if((s[s.length()-1]-'0')%2==0) {
            num_moves = 0;
        }
        else if((s[0]-'0')%2==0) {
            num_moves = 1;
        }
        else {
            bool found_even_digit = false;
            for(char c: s) {
                if((c-'0')%2==0) {
                    found_even_digit = true;
                    break;
                }
            }
            if(found_even_digit) {
                num_moves = 2;
            }
            else {
                num_moves = -1;
            }
        }
        cout << num_moves << endl;
    }
    return 0;
}
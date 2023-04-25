#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool possible = false;
        // issue with a
        int expected_a = b-(c-b);
        expected_a = (b-expected_a==c-b ? expected_a : -1);
        if(expected_a>0 && expected_a%a==0) {
            possible = true;
        }
        // issue with b
        int expected_b = a+(c-a)/2;
        expected_b = (expected_b-a==c-expected_b ? expected_b : -1);
        if(expected_b>0 && expected_b%b==0) {
            possible = true;
        }
        // issue with c
        int expected_c = b+(b-a);
        expected_c = (b-a==expected_c-b ? expected_c : -1);
        if(expected_c>0 && expected_c%c==0) {
            possible = true;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x = 1;
        while(k-x>0) {
            k = k-x;
            x++;
        }
        int num_a_beg = (n-2)-(x-1);
        for(int i=0; i<num_a_beg; i++) {
            cout << 'a';
        }
        cout << 'b';
        int num_chars_rem = n-num_a_beg-1;
        for(int i=0; i<num_chars_rem; i++) {
            if(i==num_chars_rem-k) {
                cout << 'b';
            }
            else {
                cout << 'a';
            }
        }
        cout << endl;
    }
    return 0;
}
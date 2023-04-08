#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int array_len, num_elems;
        cin >> array_len >> num_elems;
        int num_evens = 0, num_odds = 0, x;
        bool can_be_done = true;
        for(int i=0; i<array_len; i++) {
            cin >> x;
            if(x%2==0) {
                num_evens++;
            }
            else {
                num_odds++;
            }
        }
        if(num_odds==0) {
            can_be_done = false;
        }
        else {
            if(num_odds%2==0) {
                num_odds--;
            }
            if(num_elems%2==0) {
                if(num_evens < num_elems - min(num_elems-1, num_odds)) {
                    can_be_done = false;
                }
            }
            else {
                if(num_elems > num_odds+num_evens) {
                    can_be_done = false;
                }
            }
        }
        cout << (can_be_done ? "Yes" : "No") << endl;
    }
    return 0;
}
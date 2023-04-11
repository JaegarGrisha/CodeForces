#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        int num_moves = 0;
        if(a>b) {
            if(diff%2==0) {
                num_moves = 1;
            }
            else {
                num_moves = 2;
            }
        }
        else if(a==b) {
            num_moves = 0;
        }
        else {
            // a < b;
            if(diff%2==0) {
                num_moves = 2;
            }
            else {
                num_moves = 1;
            }
        }
        cout << num_moves << endl;
    }
    return 0;
}
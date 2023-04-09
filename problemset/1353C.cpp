#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = n/2;
        long long moves = 0;
        int side_length = 1;
        int inner_side_length = 0;
        long long num_blocks = 0;
        for(int i=1; i<=x; i++) {
            inner_side_length = side_length;
            side_length += 2;
            num_blocks = (long long)(inner_side_length + side_length) * 2; // a*a - b*b = (a - b)*(a + b) = 2*(a+b)
            moves += (num_blocks * i);
        }
        cout << moves << endl;
    }
    return 0;
}
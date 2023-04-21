#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        long long sum = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            sum += x;
        }
        int num_moves = 0;
        if(sum == n) {
            num_moves = 0;
        }
        else if(sum < n) {
            num_moves = 1;
        }
        else {
            num_moves = sum - n;
        }
        cout << num_moves << endl;
    }
    return 0;
}
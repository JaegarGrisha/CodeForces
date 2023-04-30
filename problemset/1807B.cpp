#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        int sum_evens = 0, sum_odds = 0;
        bool possible = false;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x%2==0) {
                sum_evens += x;
            }
            else {
                sum_odds += x;
            }
        }
        if(sum_evens > sum_odds) {
            possible = true;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int max_val = INT_MIN;
        long long sum = 0;
        int x;
        for(int i=0; i<n; i++) {
            cin >> x;
            sum += x;
            max_val = max(max_val, x);
        }
        cout << fixed << setprecision(8) << (sum-max_val)/(double)(n-1)+max_val << endl;
    }
    return 0;
}
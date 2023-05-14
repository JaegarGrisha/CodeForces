#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, m, x;
        cin >> n;
        int r_cum_sum = 0, r_max = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            r_cum_sum += x;
            r_max = max(r_max, r_cum_sum);
        }
        cin >> m;
        int b_cum_sum = 0, b_max = 0;
        for(int i=0; i<m; i++) {
            cin >> x;
            b_cum_sum += x;
            b_max = max(b_max, b_cum_sum);
        }
        cout << r_max + b_max << endl;
    }
    return 0;
}
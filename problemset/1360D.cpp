#include <iostream>

using namespace std;

// Couldn't solve this question without looking at a hint
int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int ans = 1000000001;
        for(int i=1; i*i<=n; i++) {
            if(n%i==0) {
                if(i<=k) {
                    ans = min(ans, n/i);
                }
                if(n/i<=k) {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
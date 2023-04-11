#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int ans;
        if(n>=k) {
            ans = (n%k==0) ? 1 : 2;
        }
        else {
            ans = k/n + (k%n==0 ? 0 : 1);
        }
        cout << ans << endl;
    }
    return 0;
}
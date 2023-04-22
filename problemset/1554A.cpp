#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long prev, cur, max_val = 0;
        cin >> prev;
        for(int i=1; i<n; i++) {
            cin >> cur;
            max_val = max(max_val, cur*prev);
            prev = cur;
        }
        cout << max_val << endl;
    }
    return 0;
}
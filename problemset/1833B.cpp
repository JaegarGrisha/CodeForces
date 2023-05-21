#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k;
        pair<int, int> a[n];
        int b[n];
        for(int i=0; i<n; i++) {
            cin >> x;
            a[i] = make_pair(x, i);
        }
        sort(a, a+n, comparator);
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        sort(b, b+n);
        int ans[n];
        for(int i=0; i<n; i++) {
            ans[a[i].second] = b[i];
        }
        for(int i=0; i<n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
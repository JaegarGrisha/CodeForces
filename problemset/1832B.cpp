#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        long long arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        long long cum_sum[n];
        cum_sum[0] = arr[0];
        for(int i=1; i<n; i++) {
            cum_sum[i] = cum_sum[i-1]+arr[i];
        }
        int ptr_left = 0, ptr_right = n-k-1;
        long long sum = 0;
        long long cur_cum_sum = 0;
        long long max_cum_sum = 0;
        for(int i=0; i<=k; i++) {
            cur_cum_sum = cum_sum[ptr_right]-(ptr_left==0 ? 0L : cum_sum[ptr_left-1]);
            max_cum_sum = max(max_cum_sum, cur_cum_sum);
            ptr_left += 2;
            ptr_right++;
        }
        cout << max_cum_sum << endl;
    }
    return 0;
}
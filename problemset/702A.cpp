#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x, prev;
    int max_inc_subarray_len = 1;
    int cur_inc_subarray_len = 1;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(i==0) {
            prev = x;
        }
        else {
            if(x<=prev) {
                max_inc_subarray_len = max(max_inc_subarray_len, cur_inc_subarray_len);
                cur_inc_subarray_len = 1;
            }
            else {
                cur_inc_subarray_len++;
            }
            prev = x;
        }
        max_inc_subarray_len = max(max_inc_subarray_len, cur_inc_subarray_len);
    }
    cout << max_inc_subarray_len << endl;
    return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int t;
    int N = 200000;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        int arr[N];
        memset(arr, 0, N*sizeof(int));
        int max_times = 0;
        int num_distinct = 0;
        while(n--) {
            cin >> x;
            arr[x-1]++;
            if(arr[x-1]==1) {
                num_distinct++;
            }
            if(arr[x-1]>max_times) {
                max_times = arr[x-1];
            }
        }
        int ans = 0;
        if(num_distinct==max_times) {
            ans = num_distinct - 1;
        }
        else {
            ans = min(num_distinct, max_times);
        }
        cout << ans << endl;
    }
}
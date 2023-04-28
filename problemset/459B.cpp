#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int min_val = arr[0];
    int max_val = arr[n-1];
    if(min_val == max_val) {
        cout << 0 << " " << ((long long)n*(n-1))/2 << endl;
    }
    else {
        cout << max_val-min_val << " ";
        long long count_max = 1;
        for(int i=n-2; i>=0; i--) {
            if(arr[i]==arr[n-1]) {
                count_max++;
            }
        }
        long long count_min = 1;
        for(int i=1; i<n; i++) {
            if(arr[i]==arr[0]) {
                count_min++;
            }
        }
        cout << count_max * count_min << endl;
    }
    return 0;
}
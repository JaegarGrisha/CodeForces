#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    for(int i=1; i<n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    int m, x;
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> x;
        cout << lower_bound(arr, arr+n, x)-arr+1 << endl;
    }
    return 0;
}
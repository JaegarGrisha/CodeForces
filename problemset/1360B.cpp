#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int min_diff = 10001;
        int x;
        for(int i=0; i<n-1; i++) {
            x = abs(arr[i] - arr[i+1]);
            if(min_diff > x) {
                min_diff = x;
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}
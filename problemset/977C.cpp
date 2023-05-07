#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if(k==0) {
        if(arr[0]==1) {
            cout << -1 << endl;
        }
        else {
            cout << arr[0]-1 << endl;
        }
    }
    else {
        if(k==n) {
            cout << arr[n-1] << endl;
        }
        else {
            if(arr[k-1]==arr[k]) {
                cout << -1 << endl;
            }
            else {
                cout << arr[k-1] << endl;
            }
        }
    }
    return 0;
}
#include <iostream>
#include <algorithm>

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
        bool possible = true;
        if(n==1) {
            if(arr[0]>1) {
                possible = false;
            }
        }
        else {
            if(arr[n-1]-arr[n-2] > 1) {
                possible = false;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
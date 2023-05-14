#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int arr_size = 2*n;
        int arr[arr_size];
        for(int i=0; i<arr_size; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+arr_size);
        bool possible = true;
        for(int i=0; i<n; i++) {
            if(arr[i+n]-arr[i]<x) {
                possible = false;
                break;
            }   
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
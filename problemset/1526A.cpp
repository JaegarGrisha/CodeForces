#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n_, n;
        cin >> n_;
        n = 2*n_;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int start = 0, end = n-1;
        while((n%2==0 && start<end) || (n%2==1 && start<=end)) {
            if(start==end) {
                cout << arr[start] << " ";
            }
            cout << arr[start] << " " << arr[end] << " ";
            start++;
            end--;
        }
        cout << endl;
    }
    return 0;
}
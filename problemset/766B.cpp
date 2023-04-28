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
    bool found = false;
    for(int i=n-1; i>=2; i--) {
        if(arr[i]<arr[i-1]+arr[i-2]) {
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
    return 0;
}
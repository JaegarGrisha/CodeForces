#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int min_val, max_val;
    for(int i=0; i<n; i++) {
        if(i==0) {
            min_val = abs(arr[i] - arr[1]);
            max_val = abs(arr[i] - arr[n-1]);
        }
        else if(i==n-1) {
            min_val = abs(arr[i] - arr[n-2]);
            max_val = abs(arr[i] - arr[0]);
        }
        else {
            min_val = min(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1]));
            max_val = max(abs(arr[i]-arr[0]), abs(arr[i]-arr[n-1]));
        }
        cout << min_val << " " << max_val << endl;
    }
    return 0;
}
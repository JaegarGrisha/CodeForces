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
        float factor;
        int total_count = 0;
        for(int i=0; i<n-1; i++) {
            if(arr[i]>arr[i+1]) {
                factor = arr[i]/(float)arr[i+1];
            }
            else if(arr[i]<arr[i+1]) {
                factor = arr[i+1]/(float)arr[i];
            }
            else {
                // do nothing
            }
            while(factor > 2) {
                total_count++;
                factor = factor / 2;
            }
        }
        cout << total_count << endl;
    }
    return 0;
}
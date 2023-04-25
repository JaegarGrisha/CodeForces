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
        int sum = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr+n);
        if(sum%n==0) {
            int count_greater = 0;
            for(int i=0; i<n; i++) {
                if(arr[i] > sum/n) {
                    count_greater++;
                }
            }
            cout << count_greater << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
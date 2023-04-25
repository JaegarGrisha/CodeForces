#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count_evens = 0, count_odds = 0;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]%2==0) {
                count_evens++;
            }
            else {
                count_odds++;
            }
        }
        sort(arr, arr+n);
        if(count_evens%2==0 && count_odds%2==0) {
            cout << "YES" << endl;
        }
        else {
            // count_evens%2==1 and count_odds%2==1
            bool found = false;
            for(int i=1; i<n; i++) {
                if(abs(arr[i]-arr[i-1])==1) {
                    found = true;
                    break;
                }
            }
            cout << (found ? "YES" : "NO") << endl;
        }

    }
    return 0;
}
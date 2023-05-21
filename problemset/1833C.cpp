#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int min_val = 1000000001, num_odds = 0, num_evens = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            min_val = min(min_val, arr[i]);
            if(arr[i]%2==0) {
                num_evens++;
            }
            else {
                num_odds++;
            }
        }
        bool possible = true;
        if(min_val%2==0) {
            // even parity array
            if(num_odds>0) {
                possible = false;
            }
        }   
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
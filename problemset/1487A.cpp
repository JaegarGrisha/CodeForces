#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int min_val = 101;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            min_val = min(min_val, arr[i]);
        }
        int count = 0;
        for(int i=0; i<n; i++) {
            if(min_val==arr[i]) {
                count++;
            }
        }
        cout << n-count << endl;
    }
    return 0;
}
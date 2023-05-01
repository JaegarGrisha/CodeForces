#include <iostream>
#include <cstring>

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
        int scores[n];
        memset(scores, 0, n*sizeof(int));
        for(int i=n-1; i>=0; i--) {
            if(i+arr[i]<n) {
                scores[i] = arr[i] + scores[i+arr[i]];
            }
            else {
                scores[i] = arr[i];
            }
        }
        int max_val = 0;
        for(int i=0; i<n; i++) {
            max_val = max(max_val, scores[i]);
        }
        cout << max_val << endl;
    }
    return 0;
}
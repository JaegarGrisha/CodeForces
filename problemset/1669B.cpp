#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x, ans=-1;
        cin >> n;
        int arr[n];
        memset(arr, 0, n*sizeof(int));
        for(int i=0; i<n; i++) {
            cin >> x;
            arr[x-1]++;
            if(arr[x-1]==3) {
                ans = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
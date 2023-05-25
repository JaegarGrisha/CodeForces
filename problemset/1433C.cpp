#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int max_val_idx = 0;
        int max_val_count = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[max_val_idx]<arr[i]) {
                max_val_idx = i;
                max_val_count = 0;
            }
            if(arr[max_val_idx]==arr[i]) {
                max_val_count++;
            }
        }
        if(max_val_count==1) {
            cout << max_val_idx+1 << endl;
        }
        else if(max_val_count==n) {
            cout << -1 << endl;
        }
        else {
            int ans = -1;
            for(int i=0; i<n; i++) {
                if(arr[i]==arr[max_val_idx]) {
                    if(i==0) {
                        if(arr[i]>arr[i+1]) {
                            ans = i;
                            break;
                        }
                    }
                    else if(i==n-1) {
                        if(arr[i]>arr[i-1]) {
                            ans = i;
                            break;
                        }
                    }
                    else {
                        if(arr[i]>arr[i-1] || arr[i]>arr[i+1]) {
                            ans = i;
                            break;
                        }
                    }
                }
            }
            cout << ans+1 << endl;
        }
    }
    return 0;
}
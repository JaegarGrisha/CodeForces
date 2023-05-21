#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n], pos[n+1];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            pos[arr[i]] = i;
        }
        if(n==1) {
            cout << 1 << endl;
            continue;
        }
        if(pos[n]==0) {
            if(pos[n-1]==n-1) {
                cout << n-1 << " ";
                for(int i=0; i<n-1; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            else {
                for(int i=pos[n-1]; i<n; i++) {
                    cout << arr[i] << " ";
                }
                cout << arr[pos[n-1]-1] << " ";
                for(int i=0; i<pos[n-1]-1; i++) {
                    cout << arr[i] << " ";
                }
            }
        }
        else if (pos[n]==n-1) {
            cout << n << " ";
            int final_pos = -1;
            for(int i=n-2; i>=0; i--) {
                if(arr[i]>arr[0]) {
                    cout << arr[i] << " ";
                }
                else {
                    final_pos = i;
                    break;
                }
            }
            for(int i=0; i<=final_pos; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else {
            for(int i=pos[n]; i<n; i++) {
                cout << arr[i] << " ";
            }
            cout << arr[pos[n]-1] << " ";
            int final_pos = -1;
            for(int i=pos[n]-2; i>=0; i--) {
                if(arr[i]>arr[0]) {
                    cout << arr[i] << " ";
                }
                else {
                    final_pos = i;
                    break;
                }
            }
            for(int i=0; i<=final_pos; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
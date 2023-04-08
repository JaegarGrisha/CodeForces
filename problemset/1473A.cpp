#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        int arr[n];
        bool yes = true;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]>d) {
                yes = false;
            }
        }
        sort(arr, arr+n);
        if(!yes) {
            if(arr[0]+arr[1]<=d) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
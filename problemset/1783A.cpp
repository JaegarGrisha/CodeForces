#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(int a, int b) {
    return a>b;
}

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
        sort(arr, arr+n, comparator);
        bool possible = true;
        if(n>1) {
            if(arr[0]==arr[n-1]) {
                cout << "NO" << endl;
            }
            else {
                if(arr[0]==arr[1]) {
                    int temp = arr[n-1];
                    arr[n-1] = arr[0];
                    arr[0] = temp;
                }
                cout << "YES" << endl;
                for(int i=0; i<n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << arr[0] << endl;
        }
    }
    return 0;
}
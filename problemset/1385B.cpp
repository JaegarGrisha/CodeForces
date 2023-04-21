#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n*2];
        for(int i=0; i<n*2; i++) {
            cin >> arr[i];
        }
        bool seen_a[n];
        for(int i=0; i<n; i++) {
            seen_a[i] = false;
        }
        int elem;
        for(int i=0; i<2*n; i++) {
            elem = arr[i] - 1;
            if(!seen_a[elem]) {
                cout << arr[i] << " ";;
                seen_a[elem] = true;
            }
        }
        cout << endl;
    }
    return 0;
}
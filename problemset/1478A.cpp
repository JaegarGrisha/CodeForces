#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[101];
        for(int i=0; i<101; i++) {
            arr[i] = 0;
        }
        int x;
        for(int i=0; i<n; i++) {
            cin >> x;
            arr[x]++;
        }
        int max_val = 0;
        for(int i=0; i<101; i++) {
            if(arr[i]>max_val) {
                max_val = arr[i];
            }
        }
        cout << max_val << endl;
    }
    return 0;
}
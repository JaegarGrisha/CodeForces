#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[100];
        for(int i=0; i<100; i++) {
            arr[i] = 0;
        }
        int x;
        for(int i=0; i<n; i++) {
            cin >> x;
            arr[x-1]++;
        }
        int count = 0;
        for(int i=0; i<100; i++) {
            if(arr[i]!=0) {
                count = n - arr[i];
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
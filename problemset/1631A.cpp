#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        for(int i=0; i<n; i++) {
            if(a[i]>b[i]) {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
        int max_a = a[0], max_b = b[0];
        for(int i=0; i<n; i++) {
            if(max_a < a[i]) {
                max_a = a[i];
            }
            if(max_b < b[i]) {
                max_b = b[i];
            }
        }
        cout << max_a * max_b << endl;
    }
    return 0;
}
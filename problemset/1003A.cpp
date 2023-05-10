#include <iostream>

using namespace std;

int main(void) {
    int n, x;
    cin >> n;
    int arr[100];
    for(int i=0; i<100; i++) {
        arr[i] = 0;
    }
    for(int i=0; i<n; i++) {
        cin >> x;
        arr[x-1]++;
    }
    int max_val = -1;
    for(int i=0; i<100; i++) {
        max_val = max(max_val, arr[i]);
    }
    cout << max_val << endl;
    return 0;
}
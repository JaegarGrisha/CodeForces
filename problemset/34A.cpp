#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int pos1 = 0, pos2 = 1, min_diff = abs(arr[0]-arr[1]);
    for(int i=0; i<n-1; i++) {
        if(min_diff>abs(arr[i]-arr[i+1])) {
            pos1 = i;
            pos2 = i+1;
            min_diff = abs(arr[i]-arr[i+1]);
        }
    }
    if(min_diff > abs(arr[0]-arr[n-1])) {
        pos1 = n-1;
        pos2 = 0;
        min_diff = abs(arr[0]-arr[n-1]);
    }
    cout << pos1+1 << " " << pos2+1 << endl;
    return 0;
}
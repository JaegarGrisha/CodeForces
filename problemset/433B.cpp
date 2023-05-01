#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n], sorted[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted, sorted+n);

    long long cum_arr[n+1], cum_sorted[n+1];
    cum_arr[0] = cum_sorted[0] = 0;
    for(int i=0; i<n; i++) {
        cum_arr[i+1] = cum_arr[i] + arr[i];
        cum_sorted[i+1] = cum_sorted[i] + sorted[i];
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        if(type==1) {
            cout << cum_arr[r]-cum_arr[l-1] << endl;
        }
        else {
            cout << cum_sorted[r]-cum_sorted[l-1] << endl;
        }
    }
    return 0;
}
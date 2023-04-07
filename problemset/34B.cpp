#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main(void) {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int total_amount = 0;
    for(int i=0; i<m && arr[i]<0; i++) {
        total_amount += arr[i];
    }
    cout << -1*total_amount << endl;
    return 0;
}
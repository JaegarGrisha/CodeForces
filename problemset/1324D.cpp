#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }
    int diff[n];
    for(int i=0; i<n; i++) {
        diff[i] = a[i]-b[i];
    }
    sort(diff, diff+n);
    long long count = 0;
    int start = 0, end = n;
    while(start<n && diff[start]<=0) {
        while(end>start && diff[start]+diff[end-1]>0) {
            end--;
        }
        count += (n-end);
        start++;
    }
    long long num_positive = n - (long long)start;
    count += (num_positive*(num_positive-1))/2;
    cout << count << endl;
    return 0;
}
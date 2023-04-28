#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    int count_ones = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]==1) {
            count_ones++;
        }
    }
    int cumulative_val[n+1];
    cumulative_val[0] = 0;
    for(int i=1; i<=n; i++) {
        cumulative_val[i] = cumulative_val[i-1] + (arr[i-1]==0 ? 1 : -1);
    }
    int max_count = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
            max_count = max(max_count, cumulative_val[j]-cumulative_val[i]);
        }
    }
    cout << (n-count_ones==0 ? count_ones-1 : count_ones + max_count) << endl;
    return 0;
}
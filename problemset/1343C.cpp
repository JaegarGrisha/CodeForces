#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int max_val = 0, min_val = 0;
        long long pos_sum = 0, neg_sum = 0;
        for(int i=0; i<n; i++) {
            if(arr[i]<0) {
                min_val = arr[i];
                while(i<n && arr[i]<0) {
                    min_val = max(min_val, arr[i]);
                    i++;
                }
                i--;
                neg_sum += min_val;
            }
            else {
                max_val = arr[i];
                while(i<n && arr[i]>0) {
                    max_val = max(max_val, arr[i]);
                    i++;
                }
                i--;
                pos_sum += max_val;
            }
        }
        cout << pos_sum + neg_sum << endl;
    }
    return 0;
}
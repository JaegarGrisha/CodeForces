#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    long long cum_sum;
    long long total_sum = 0;
    long long split_sum = 0;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        total_sum += arr[i];
    }
    if(total_sum%3==0) {
        split_sum = total_sum / 3;

        int sum_count_forward[n];
        if(arr[0]==split_sum) {
            sum_count_forward[0] = 1;
        }
        else {
            sum_count_forward[0] = 0;
        }
        cum_sum = arr[0];
        for(int i=1; i<n; i++) {
            cum_sum += arr[i];
            if(cum_sum == split_sum) {
                sum_count_forward[i] = 1;
            }
            else {
                sum_count_forward[i] = 0;
            }
        }

        int sum_count_backward[n];
        if(arr[n-1]==split_sum) {
            sum_count_backward[n-1] = 1;
        }
        else {
            sum_count_backward[n-1] = 0;
        }
        cum_sum = arr[n-1];
        for(int i=n-2; i>=0; i--) {
            cum_sum += arr[i];
            if(cum_sum == split_sum) {
                sum_count_backward[i] = sum_count_backward[i+1] + 1;
            }
            else {
                sum_count_backward[i] = sum_count_backward[i+1];
            }
        }

        long long num_ways = 0;
        for(int i=0; i<n-2; i++) {
            if(sum_count_forward[i]==1) {
                num_ways += sum_count_backward[i+2];
            }
        }
        cout << num_ways << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
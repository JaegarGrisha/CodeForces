#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int right = -1;
    int cur_total_time = 0;
    int max_can_read = 0;
    int cur_can_read = 0;
    for(int left=0; left<n; left++) {
        while(right<n-1 && arr[right+1]+cur_total_time<=t) {
            cur_total_time += arr[right+1];
            right++;
        }
        cur_can_read = right<left ? 0 : right-left+1;
        max_can_read = max(max_can_read, cur_can_read);
        if(right==left-1) {
            right++;
        }
        else {
            cur_total_time -= arr[left];
        }
    }
    cout << max_can_read << endl;
    return 0;
}
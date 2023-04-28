#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int max_pos = -1, max_val = 0, second_max_val = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] > max_val) {
                second_max_val = max_val;
                max_val = arr[i];
                max_pos = i;
            }
            if(i!=max_pos && arr[i]>second_max_val) {
                second_max_val = arr[i];
            }
        }   
        for(int i=0; i<n; i++) {
            if(i==max_pos) {
                cout << arr[i]-second_max_val << " ";
            }
            else {
                cout << arr[i]-max_val << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
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
        bool odd_pos_are_even = arr[0]%2==0;
        bool even_pos_are_even = arr[1]%2==0;
        bool all_odd_pos_same_parity = true;
        bool all_even_pos_same_parity = true;
        if(odd_pos_are_even) {
            for(int i=0; i<n; i+=2) {
                if(arr[i]%2!=0) {
                    all_odd_pos_same_parity = false;
                    break;
                }
            }
        }
        else {
            for(int i=0; i<n; i+=2) {
                if(arr[i]%2==0) {
                    all_odd_pos_same_parity = false;
                    break;
                }
            }
        }
        if(even_pos_are_even) {
            for(int i=1; i<n; i+=2) {
                if(arr[i]%2!=0) {
                    all_even_pos_same_parity = false;
                    break;
                }
            }
        }
        else {
            for(int i=1; i<n; i+=2) {
                if(arr[i]%2==0) {
                    all_even_pos_same_parity = false;
                    break;
                }
            }
        }
        if(!all_even_pos_same_parity || !all_odd_pos_same_parity) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
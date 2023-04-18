#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int min_candies = 100000000;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            min_candies = min(min_candies, arr[i]);
        }
        int total_candies = 0;
        for(int i=0; i<n; i++) {
            total_candies += (arr[i] - min_candies);
        }
        cout << total_candies << endl;
    }
    return 0;
}
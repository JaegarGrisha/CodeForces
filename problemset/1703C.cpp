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
        int num_moves;
        string moves;
        for(int i=0; i<n; i++) {
            cin >> num_moves >> moves;
            for(char c: moves) {
                if(c=='U') {
                    arr[i] = (arr[i]+9)%10;
                }
                else {
                    arr[i] = (arr[i]+1)%10;
                }
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

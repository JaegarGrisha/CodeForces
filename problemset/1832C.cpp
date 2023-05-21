#include <iostream>
#include <vector>

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
        int gradient[n-1];
        for(int i=0; i<n-1; i++) {
            gradient[i] = (arr[i+1]-arr[i]);
            if(gradient[i]!=0) {
                gradient[i] = gradient[i] / abs(gradient[i]);
            }
        }
        vector<int> signs;
        int prev_sign = 0;
        for(int i=0; i<n-1; i++) {
            if(gradient[i]!=0) {
                if(prev_sign!=gradient[i]) {
                    signs.push_back(gradient[i]);
                    prev_sign = gradient[i];
                }
            }
        }
        cout << signs.size()+1 << endl;;
    }
    return 0;
}
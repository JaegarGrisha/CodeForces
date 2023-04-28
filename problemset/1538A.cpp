#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        int max_val = 0, min_val = n+1;
        int max_val_pos = -1, min_val_pos = -1;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x>max_val) {
                max_val_pos = i;
                max_val = x;
            }
            if(x<min_val) {
                min_val_pos = i;
                min_val = x;
            }
        }
        int dist = 0;
        if(min_val_pos < max_val_pos) {
            dist = min(min(max_val_pos+1, n-min_val_pos), n-max_val_pos+min_val_pos+1);
        }
        else {
            dist = min(min(min_val_pos+1, n-max_val_pos), n-min_val_pos+max_val_pos+1);
        }
        cout << dist << endl;
    }
    return 0;
}
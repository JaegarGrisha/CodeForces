#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int min_pos = -1;
        int max_pos = -1;
        int x;
        int total_zeros = 0, extra_zeros = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(min_pos==-1 && x==1) {
                min_pos = i;
            }
            if(x==1) {
                max_pos = i;
                total_zeros += extra_zeros;
                extra_zeros = 0;
            }
            if(min_pos!=-1 && x==0) {
                extra_zeros++;
            }
        }
        cout << total_zeros << endl;
    }
    return 0;
}
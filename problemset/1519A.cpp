#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int red, blue, diff;
        cin >> red >> blue >> diff;
        bool possible = false;
        if(red==blue) {
            possible = true;
        }
        else if(red>blue) {
            int max_num_r_per_b = red/blue + (red%blue==0 ? 0 : 1);
            if(max_num_r_per_b-1 <= diff) {
                possible = true;
            }
        }
        else {
            int max_num_b_per_r = blue/red + (blue%red==0 ? 0 : 1);
            if(max_num_b_per_r-1 <= diff) {
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
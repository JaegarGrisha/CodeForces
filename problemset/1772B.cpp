#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int x[4];
        cin >> x[0] >> x[1] >> x[3] >> x[2];
        int min_loc = 0, max_loc = 0;
        for(int i=0; i<4; i++) {
            if(x[i]<x[min_loc]) {
                min_loc = i;
            }
            if(x[i]>x[max_loc]) {
                max_loc = i;
            }
        }
        bool possible = true;
        if(x[0]==x[1] || x[0]==x[2] || x[0]==x[3] || x[1]==x[2] || x[1]==x[3] || x[2]==x[3]) {
            possible = false;
        }
        if(possible) {
            if(abs(min_loc-max_loc)!=2) {
                possible = false;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
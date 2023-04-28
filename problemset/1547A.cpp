#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    int ax, ay, bx, by, fx, fy;
    while(t--) {
        int travel_dist = 0;
        cin >> ax >> ay;
        cin >> bx >> by;
        cin >> fx >> fy;
        if(ax==bx && bx==fx) {
            travel_dist = abs(by-ay);
            if((ay<fy && fy<by) || (by<fy && fy<ay)) {
                travel_dist += 2;
            }
        }
        else if(ay==by && by==fy) {
            travel_dist = abs(ax-bx);
            if((ax<fx && fx<bx) || (bx<fx && fx<ax)) {
                travel_dist += 2;
            }
        }
        else {
            travel_dist = abs(ax-bx) + abs(ay-by);
        }
        cout << travel_dist << endl;
    }
    return 0;
}
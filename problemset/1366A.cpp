#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int sticks, diamonds;
        cin >> sticks >> diamonds;
        float x = (2*sticks-diamonds)/3.0f;
        float y = (2*diamonds-sticks)/3.0f;
        int sticks_left, diamonds_left;
        if(x<=0) {
            cout << min(sticks, diamonds/2) << endl;
        }
        else if(y<=0) {
            cout << min(sticks/2, diamonds) << endl;
        }
        else {
            sticks_left = sticks-2*(int)x-(int)y;
            diamonds_left = diamonds-(int)x-2*(int)y;
            cout << (int)x+(int)y+max(min(sticks_left/2, diamonds_left), min(sticks_left, diamonds_left/2)) << endl;
        }
    }
    return 0;
}
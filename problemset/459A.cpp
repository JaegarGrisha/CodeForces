#include <iostream>

using namespace std;

int main(void) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    bool possible = true;
    if(x1==x2 && y1==y2) {
        possible = false;
    }
    else if(x1==x2) {
        x3 = x4 = x1 + (y1-y2);
        y3 = y1;
        y4 = y2;
    }
    else if(y1==y2) {
        y3 = y4 = y1 + (x1-x2);
        x3 = x1;
        x4 = x2;
    }
    else {
        if(abs(y1-y2)!=abs(x1-x2)) {
            possible = false;
        }
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    if(possible) {
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}
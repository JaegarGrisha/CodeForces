#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int a, b, c;
        bool solution_exists = true;
        if(x==y && y==z) {
            a = b = c = x;
        }
        else if(x==y) {
            if(z>x) {
                solution_exists = false;
            }
            else {
                a = z;
                b = x;
                c = z;
            }
        }
        else if(y==z) {
            if(x>y) {
                solution_exists = false;
            }
            else {
                a = x;
                b = x;
                c = y;
            }
        }
        else if(x==z) {
            if(y>x) {
                solution_exists = false;
            }
            else {
                a = x;
                b = y;
                c = y;
            }
        }
        else {
            solution_exists = false;
        }
        if(!solution_exists) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }
}
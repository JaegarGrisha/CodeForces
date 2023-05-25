#include <iostream>

using namespace std;

int main(void) {
    int n, x;
    cin >> n;
    int c25 = 0, c50 = 0, c100 = 0;
    bool possible = true;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x==25) {
            c25++;
        }
        else if(x==50) {
            if(c25>0) {
                c25--;
                c50++;
            }
            else {
                possible = false;
                break;
            }
        }
        else if(x==100) {
            if(c25>0 && c50>0) {
                c25--;
                c50--;
                c100++;
            }
            else if(c25>=3) {
                c25 -= 3;
                c100++;
            }
            else {
                possible = false;
                break;
            }
        }
    }
    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}
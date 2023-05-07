#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int left = n;
        int spent = 0;
        while(left != 0) {
            spent += (left/10)*10;
            left = left%10 + left/10;
            if(left<10) {
                spent += left;
                left = 0;
            }
        }
        cout << spent << endl;
    }
    return 0;
}
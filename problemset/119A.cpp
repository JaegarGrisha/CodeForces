#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return gcd(b, a%b);
}

int main(void) {
    int a, b, n, x;
    cin >> a >> b >> n;
    bool turn = true; // true - Simon - 0, false - antisimon - 1
    while(n>0) {
        if(turn) {
            x = gcd(a, n);
        }
        else {
            x = gcd(b, n);
        }
        turn = !turn;
        n = n - x;
    }
    cout << (turn ? 1 : 0) << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int ans;
    if(a<=b) {
        ans = a;
    }
    else {
        ans = b;
    }
    long long factorial = 1;
    for(long long i=2; i<=ans; i++) {
        factorial *= i;
    }
    cout << factorial << endl;
    return 0;
}
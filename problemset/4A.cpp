#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    bool possible = false;
    if(n>2 && n%2==0) {
        possible = true;
    }
    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}
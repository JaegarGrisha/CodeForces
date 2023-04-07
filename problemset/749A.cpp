#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    cout << n/2 << endl;
    for(int i=0; i<n/2-1; i++) {
        cout << "2 ";
    }
    cout << 2 + (n%2==0 ? 0 : 1) << endl;
    return 0;
}
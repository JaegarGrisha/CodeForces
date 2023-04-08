#include <iostream>

using namespace std;

int main(void) {
    int n, a, b;
    cin >> n >> a >> b;
    cout << n-max(a, n-b-1) << endl;
    return 0;
}
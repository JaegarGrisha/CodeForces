#include <iostream>

using namespace std;

int main(void) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int num_256 = min(a, min(c, d));
    a = a - num_256;
    int num_32 = min(a, b);
    cout << 256*num_256 + 32*num_32 << endl;
    return 0;
}
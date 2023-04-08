#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int num = 6 - max(a, b) + 1;
    int denom;
    switch(num) {
        case 0:
            num = 0;
            denom = 1;
            break;
        case 1:
            num = 1;
            denom = 6;
            break;
        case 2:
            num = 1;
            denom = 3;
            break;
        case 3:
            num = 1;
            denom = 2;
            break;
        case 4:
            num = 2;
            denom = 3;
            break;
        case 5:
            num = 5;
            denom = 6;
            break;
        case 6:
            num = 1;
            denom = 1;
            break;
    }
    cout << num << "/" << denom << endl;
    return 0;
}
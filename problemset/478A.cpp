#include <iostream>

using namespace std;

int main(void) {
    int sum = 0, x;
    for(int i=0; i<5; i++) {
        cin >> x;
        sum += x;
    }
    if(sum>=5 && sum%5==0) {
        cout << sum/5 << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}
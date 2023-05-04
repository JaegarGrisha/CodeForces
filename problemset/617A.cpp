#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int count = 0;
    for(int i=5; i>0; i--) {
        count += n/i;
        n = n%i;
    }
    cout << count << endl;
    return 0;
}
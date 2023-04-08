#include <iostream>

using namespace std;

int main(void) {
    int n;
    long long have;
    cin >> n >> have;
    int distressed_kids = 0;
    while(n--) {
        char c;
        long long x;
        cin >> c >> x;
        if(c=='+') {
            have += x;
        }
        else if(c=='-') {
            if(x > have) {
                distressed_kids++;
            }
            else {
                have -= x;
            }
        }
    }
    cout << have << " " << distressed_kids << endl;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, count_odds = 0, count_evens = 0, x;
        cin >> n;
        n *= 2;
        while(n--) {
            cin >> x;
            if(x%2==0) {
                count_evens++;
            }
            else {
                count_odds++;
            }
        }
        if(count_evens==count_odds) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
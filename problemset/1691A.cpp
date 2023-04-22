#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        int count_evens = 0;
        int count_odds = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x%2==0) {
                count_evens++;
            }
            else {
                count_odds++;
            }
        }
        cout << min(count_evens, count_odds) << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        int count_evens = 0, count_odds = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x%2==0) {
                count_evens++;
            }
            else {
                count_odds++;
            }
        }
        bool possible = true;
        if(count_odds==0) {
            possible = false;
        }
        else if(count_evens==0 && n%2==0) {
            possible = false;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
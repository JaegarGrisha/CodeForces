#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        int nearest_round;
        switch(s.length()) {
            case 1:
                nearest_round = 1;
                break;
            case 2:
                nearest_round = 10;
                break;
            case 3:
                nearest_round = 100;
                break;
            case 4:
                nearest_round = 1000;
                break;
            case 5:
                nearest_round = 10000;
                break;
            case 6:
                nearest_round = 100000;
                break;
            case 7:
                nearest_round = 1000000;
                break;
            case 8:
                nearest_round = 10000000;
                break;
            case 9:
                nearest_round = 100000000;
                break;
            case 10:
                nearest_round = 1000000000;
                break;
        }
        cout << n-nearest_round << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count_twos = 0, count_threes = 0;
        while(n%2==0) {
            n = n/2;
            count_twos++;
        }
        while(n%3==0) {
            n = n/3;
            count_threes++;
        }
        if(n==1 && count_threes>=count_twos) {
            cout << count_threes + (count_threes - count_twos) << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
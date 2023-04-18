#include <iostream>

using namespace std;

int main(void) {
    int powers_of_two[30];
    powers_of_two[0] = 2;
    for(int i=1; i<30; i++) {
        powers_of_two[i] = powers_of_two[i-1]*2;
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << powers_of_two[n/2] - 2 << endl;
    }
    return 0;
}
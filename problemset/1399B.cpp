#include <iostream>

using namespace std;

int main(void) {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int candies[n], oranges[n];
        int min_c = 1000000000+1, min_o = 1000000000+1;
        long long total = 0;
        for(int i=0; i<n; i++) {
            cin >> candies[i];
            if(min_c > candies[i]) {
                min_c = candies[i];
            }
        }
        for(int i=0; i<n; i++) {
            cin >> oranges[i];
            if(min_o > oranges[i]) {
                min_o = oranges[i];
            }
        }
        for(int i=0; i<n; i++) {
            total += max(candies[i]-min_c, oranges[i]-min_o);
        }
        cout << total << endl;
    }
}
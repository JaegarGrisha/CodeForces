#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int k;
    cin >> k;
    int growth[12];
    for(int i=0; i<12; i++) {
        cin >> growth[i];
    }
    sort(growth, growth+12);
    int sum = 0;
    int count = 0, i = 11;
    while(i>=0 && sum<k) {
        sum += growth[i];
        i--;
        count++;
    }
    cout << (sum<k ? -1 : count) << endl;
    return 0;
}
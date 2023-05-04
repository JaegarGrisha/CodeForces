#include <iostream>

using namespace std;

int main(void) {
    int k, has_n_dollars, num_bananas;
    cin >> k >> has_n_dollars >> num_bananas;
    long long total_cost = ((long long)num_bananas*(num_bananas+1))/2 * k;
    long long to_borrow = total_cost-has_n_dollars;
    cout << (to_borrow<0 ? 0 : to_borrow) << endl;
    return 0;
}
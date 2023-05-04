#include <iostream>

using namespace std;

int main(void) {
    long long limak, bob;
    cin >> limak >> bob;
    long long num_years = 0;
    while(limak<=bob) {
        limak *= 3;
        bob *= 2;
        num_years++;
    }
    cout << num_years << endl;
    return 0;
}
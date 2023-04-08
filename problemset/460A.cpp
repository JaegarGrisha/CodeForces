#include <iostream>

using namespace std;

int main(void) {
    int num_socks, num_days;
    cin >> num_socks >> num_days;
    if(num_socks<num_days) {
        cout << num_socks << endl;
    }
    else {
        int total_count = 0;
        while(num_socks>=num_days) {
            total_count += num_days;
            num_socks = num_socks - num_days + 1;
        }
        cout << total_count + num_socks << endl;
    }
    return 0;
}
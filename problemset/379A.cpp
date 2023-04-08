#include <iostream>

using namespace std;

int main(void) {
    int intact, b;
    cin >> intact >> b;
    int went_out = 0, total_hours = 0;
    while(intact != 0) {
        total_hours += intact;
        went_out += intact;
        intact = went_out / b;
        went_out = went_out % b;
    }
    cout << total_hours << endl;
    return 0;
}
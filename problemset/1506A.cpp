#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int rows, cols;
        long long cell_no;
        cin >> rows >> cols >> cell_no;

        // by column
        int r_c, c_c;
        c_c = (cell_no-1)/rows;
        r_c = (cell_no-1)%rows;

        // by rows;
        long long output = (long long)r_c*cols + c_c + 1;
        cout << output << endl;
    }
    return 0;
}
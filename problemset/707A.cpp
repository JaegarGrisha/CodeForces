#include <iostream>

using namespace std;

int main(void) {
    int rows, cols;
    cin >> rows >> cols;
    bool colored = false;
    char c;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> c;
            switch(c) {
                case 'C':
                case 'M':
                case 'Y':
                    colored = true;
            }
        }
    }
    cout << (colored ? "#Color" : "#Black&White") << endl;
    return 0;
}
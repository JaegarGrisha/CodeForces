#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x;
        }
        int output;
        switch (n)
        {
            case 0:
                output = 270;
                break;
            case 1:
                output = 216;
                break;
            case 2:
                output = 168;
                break;
            case 3:
                output = 126;
                break;
            case 4:
                output = 90;
                break;
            case 5:
                output = 60;
                break;
            case 6:
                output = 36;
                break;
            case 7:
                output = 18;
                break;
            case 8:
                output = 6;
                break;
            default:
                output = -1;
                break;
        }
        cout << output << endl;
    }
    return 0;
}
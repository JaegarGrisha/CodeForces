#include <iostream>

using namespace std;

int main(void) {
    /*
        home -> shop 1
        d1
        shop 1 -> shop 2
        min(d3, d1+d2)
        shop 2 -> home
        min(d2, d3+d1)

        home -> shop 2
        d2
        shop 2 -> shop 1
        min(d3, d2+d1)
        shop 1 -> home 
        min(d1, d3+d2)
    */
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d1+min(d3, d1+d2)+min(d2, d3+d1), d2+min(d3, d2+d1)+min(d1, d3+d2)) << endl;
    return 0;
}
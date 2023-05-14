#include <iostream>

using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while(n!=0) {
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main(void) {
    int n;
    cin >> n;
    int x = 10, sx, count = 0;
    while(true) {
        x += 9;
        sx = sum_of_digits(x);
        if(sx==10) {
            count++;
        }
        if(count==n) {
            cout << x << endl;
            break;
        }
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x;
    int chest = 0, biceps = 0, back = 0;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(i%3==0) {
            chest += x;
        }
        else if(i%3==1) {
            biceps += x;
        }
        else {
            back += x;
        }
    }
    if(chest > biceps && chest > back) {
        cout << "chest" << endl;
    }
    else if(biceps > chest && biceps > back) {
        cout << "biceps" << endl;
    }
    else {
        cout << "back" << endl;
    }
    return 0;
}
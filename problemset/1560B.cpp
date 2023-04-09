#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int in_between = abs(b-a)-1;
        int num_people = (in_between+1)*2;
        int opposite_a = (a+in_between+1)%num_people;
        opposite_a = opposite_a==0 ? num_people : opposite_a;
        int opposite_b = (b+in_between+1)%num_people;
        opposite_b = opposite_b==0 ? num_people : opposite_b;
        if(opposite_a==b && opposite_b==a && c<=num_people) {  
            int opposite_c = (c+in_between+1)%num_people;
            opposite_c = (opposite_c==0 ? num_people : opposite_c);
            cout << opposite_c << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
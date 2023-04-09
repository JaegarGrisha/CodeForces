#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int num_boys, num_girls;
    cin >> num_boys;
    int boys[num_boys];
    for(int i=0; i<num_boys; i++) {
        cin >> boys[i];
    }
    cin >> num_girls;
    int girls[num_girls];
    for(int i=0; i<num_girls; i++) {
        cin >> girls[i];
    }
    sort(boys, boys+num_boys);
    sort(girls, girls+num_girls);
    int boys_pointer = 0, girls_pointer = 0;
    int count = 0 ;
    for(; boys_pointer<num_boys; boys_pointer++) {
        while(girls_pointer<num_girls && girls[girls_pointer]<=boys[boys_pointer]+1 && !(abs(girls[girls_pointer]-boys[boys_pointer])<=1)) {
            girls_pointer++;
        }
        if(abs(girls[girls_pointer]-boys[boys_pointer])<=1) {
            girls_pointer++;
            count++;
        }
    }   
    cout << count << endl;
    return 0;
}
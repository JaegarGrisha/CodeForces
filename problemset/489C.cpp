#include <iostream>

using namespace std;

int main(void) {
    int length, sum_;
    cin >> length >> sum_;
    if((sum_==0 && length>1) || sum_>9*length) {
        cout << "-1 -1" << endl;
    }
    else if(sum_==0 && length==1) {
        cout << "0 0" << endl;
    }
    else {
        int sum = sum_;
        int array[length];
        for(int i=0; i<length; i++) {
            array[i] = 0;
        }
        int min_num_idx = length-1;
        while(sum>9) {
            array[min_num_idx--] = 9;
            sum -= 9;
        }
        if(min_num_idx==0) {
            array[min_num_idx] = sum;
        }
        else {
            array[min_num_idx] = sum-1;
            while(--min_num_idx != 0) {
                array[min_num_idx] = 0;
            }
            array[0] = 1;
        }
        for(int i=0; i<length; i++) {
            cout << array[i];
        }
        cout << " ";
        int max_num_idx = 0;
        sum = sum_;
        while(sum>9) {
            array[max_num_idx++] = 9;
            sum = sum - 9;
        }
        if(sum>0) {
            array[max_num_idx++] = sum;
        }
        while(max_num_idx<length) {
            array[max_num_idx++] = 0;
        }
        for(int i=0; i<length; i++) {
            cout << array[i];
        }
        cout << endl;
    }
    return 0;
}
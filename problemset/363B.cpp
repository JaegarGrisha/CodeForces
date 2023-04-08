#include <iostream>

using namespace std;

int main(void) {
    int num_planks, piano_width;
    cin >> num_planks >> piano_width;
    int cum_heights[num_planks];
    int x;
    cin >> cum_heights[0];
    for(int i=1; i<num_planks; i++) {
        cin >> x;
        cum_heights[i] = cum_heights[i-1] + x;
    }
    int min_height = cum_heights[piano_width-1];
    int idx = 1;
    for(int i=1; i+piano_width<num_planks+1; i++) {
        if((cum_heights[i+piano_width-1]-cum_heights[i-1]) < min_height) {
            min_height = cum_heights[i+piano_width-1]-cum_heights[i-1];
            idx = i+1;
        }
    }
    cout << idx << endl;
    return 0;
}
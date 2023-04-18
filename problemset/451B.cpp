#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    int segment_start = -1, segment_end = -1;
    bool segment_found = false, first = true;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(i>0) {
            if(first && arr[i]<arr[i-1]) {
                segment_start = i-1;
                segment_found = true;
                first = false;
            }
            if(segment_found && arr[i]>arr[i-1]) {
                segment_end = i-1;
                segment_found = false;
            }
        }
    }
    if(segment_found && segment_end==-1) {
        segment_end = n-1;
    }
    int new_arr[n];
    for(int i=segment_end; i>=segment_start; i--) {
        new_arr[segment_end-i+segment_start] = arr[i];
    }
    for(int i=0; i<n; i++) {
        if(i<segment_start || i>segment_end) {
            new_arr[i] = arr[i];
        }
    }
    bool possible = true;
    for(int i=1; i<n; i++) {
        if(new_arr[i]<new_arr[i-1]) {
            possible = false;
            break;
        }
    }
    if(possible) {
        cout << "yes" << endl; 
        cout << (segment_start==-1 ? 1 : segment_start+1) << " " << (segment_end==-1 ? 1 : segment_end+1) << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}
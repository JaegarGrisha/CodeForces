#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    int first[n-1], second[n-2];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++) {
        cin >> first[i];
    }
    for(int i=0; i<n-2; i++) {
        cin >> second[i];
    }
    sort(arr, arr+n);
    sort(first, first+n-1);
    sort(second, second+n-2);
    bool found = false;
    int ans_one, ans_two;

    for(int i=0; i<n-1; i++) {
        if(arr[i]!=first[i]) {
            found = true;
            ans_one = arr[i];
            break;
        }
    }
    if(!found) {
        ans_one = arr[n-1];
    }
    found = false;
    for(int i=0; i<n-2; i++) {
        if(first[i]!=second[i]) {
            found = true;
            ans_two = first[i];
            break;
        }
    }
    if(!found) {
        ans_two = first[n-2];
    }
    cout << ans_one << "\n" << ans_two << endl;
    return 0;
}
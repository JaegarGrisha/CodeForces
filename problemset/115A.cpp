#include <iostream>
#include <vector>

using namespace std;

struct Node {
    vector<Node*> children;
};

int main(void) {
    int n, x;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]!=-1) {
            arr[i]--;
        }
    }
    int max_height = 0;
    int cur_height = 0;
    int cur;
    for(int i=0; i<n; i++) {
        cur = arr[i];
        cur_height = 0;
        while(cur!=-1) {
            cur = arr[cur];
            cur_height++;
        }
        max_height = max(cur_height, max_height);
    }
    cout << max_height+1 << endl;
    return 0;
}
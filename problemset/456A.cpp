#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int quality[n][2];
    memset(quality, 0, 2*n*sizeof(int));
    int a, b;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        quality[a-1][0] = max(quality[a-1][0], b);
        quality[a-1][1] = quality[a-1][1]==0 ? b : min(quality[a-1][1], b);
    }
    int cur_max_quality = 0, cur_min_quality = 0; 
    bool happy_alex = false;
    for(int i=0; i<n; i++) {
        if(quality[i][0]==0) {
            continue;
        }
        if(cur_max_quality==0) {
            cur_max_quality = quality[i][0];
            cur_min_quality = quality[i][1];
            continue;
        }
        if(cur_min_quality>quality[i][0]) {
            happy_alex = true;
            break;
        }
        cur_max_quality = quality[i][0];
        cur_min_quality = quality[i][1];
    }
    cout << (happy_alex ? "Happy Alex" : "Poor Alex") << endl;
    return 0;
}
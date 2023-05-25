#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, h, m;
        cin >> n >> h >> m;
        int time = h*60 + m;
        int h_, m_, time_ = 0, time_diff, min_time_diff = 10000000;
        for(int i=0; i<n; i++) {
            cin >> h_ >> m_;
            time_ = h_*60 + m_;
            if(time > time_) {
                time_diff = 24*60 - (time-time_);
            }
            else {
                time_diff = time_-time;
            }
            min_time_diff = min(min_time_diff, time_diff);
        }
        cout << min_time_diff/60 << " " << min_time_diff%60 << endl;
    }
    return 0;
}
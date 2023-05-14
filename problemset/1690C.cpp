#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int start_times[n], end_times[n];
        for(int i=0; i<n; i++) {
            cin >> start_times[i];
        }
        for(int i=0; i<n; i++) {
            cin >> end_times[i];
        }
        int last_end_time = 0;
        for(int i=0; i<n; i++) {
            cout << end_times[i]-max(last_end_time, start_times[i]) << " ";
            last_end_time = end_times[i];
        }
        cout << endl;
    }
    return 0;
}
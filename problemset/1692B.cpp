#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        int N = 10000;
        int arr[N];
        memset(arr, 0, N*sizeof(int));
        for(int i=0; i<n; i++) {
            cin >> x;
            arr[x-1]++;
        }
        int count = 0;
        for(int i=0; i<N; i++) {
            if(arr[i]>0) {
                count += (arr[i]-1);
            }
        }
        if(count%2==1) {
            count++;
        }
        cout << n-count << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

bool binary_search(long long arr[], int arr_len, long long to_find) {
    int start = 1;
    int end = arr_len-1;
    bool found = false;
    while(end>=start) {
        int mid = (start + end) / 2;
        if(to_find == arr[mid]) {
            found = true;
            break;
        }
        else if(to_find > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return found;
}

int main(void) {
    int N = 10001;
    long long cubes[N];
    for(long long i=0; i<=N; i++) {
        cubes[i] = i*i*i;
    }
    int t;
    cin >> t;
    while(t--) {
        long long x;
        cin >> x;
        bool possible = false;
        for(int i=1; i<=N && cubes[i]<=x; i++) {
            if(binary_search(cubes, N, x-cubes[i])) {
                possible = true;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
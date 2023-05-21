#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    long long sum = 0;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += (long long)(arr[i]);
    }
    int q;
    sort(arr, arr+n);
    int min_added[n];
    min_added[0] = 0;
    for(int i=1; i<n; i++) {
        min_added[i] = arr[i]+(n-i)<=arr[min_added[i-1]]+(n-min_added[i-1]) ? i : min_added[i-1];
    }
    for(int i=0; i<k; i++) {
        cin >> q;
        if(q>n) {
            int num_subtractions = 0;
            int num_additions = 0;
            if((q-n)%2!=0) {
                num_subtractions = (q-n+1)/2;
                num_additions = n-1;
            }
            else {
                num_subtractions = (q-n)/2;
                num_additions = n;
            }
            int min_elem = num_additions>0 ? arr[min_added[num_additions-1]] + q - min_added[num_additions-1] : arr[0];
            min_elem = num_additions<n ? min(min_elem, arr[num_additions]) : min_elem;
            long long total_sum = sum + ((long long)q*(q+1))/2 - ((q-num_additions)*(long long)(q-num_additions+1))/2;
            long long num_subtractions_possible = total_sum - n * (long long)(min_elem);
            if(num_subtractions_possible>num_subtractions) {
                cout << min_elem << " ";
            }
            else {
                long long x = (num_subtractions-num_subtractions_possible);
                long long ans = 0;
                ans = min_elem - (x/n) - (x%n==0 ? 0 : 1);
                cout << ans << " ";
            }
        }
        else {
            int num_additions = min(n, q);
            int min_elem = num_additions>0 ? arr[min_added[num_additions-1]] + q - min_added[num_additions-1] : arr[0];
            min_elem = num_additions<n ? min(min_elem, arr[num_additions]) : min_elem;
            cout << min_elem << " ";
        }
    }
    cout << endl;

    return 0;
}
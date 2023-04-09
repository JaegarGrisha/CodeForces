#include <iostream>

using namespace std;

int main(void) {
    int primes[51];
    for(int i=0; i<51; i++) {
        primes[i] = -1;
    }
    primes[0] = primes[1] = 0;
    for(int i=2; i<51; i++) {
        if(primes[i]==-1) {
            primes[i] = 1;
        }
        for(int j=2*i; j<51; j+=i) {
            primes[j] = 0;
        }
    }
    int n, m;
    bool wait_for_it = false;
    cin >> n >> m;
    if(primes[n]==1) {
        int next_prime;
        for(next_prime=n+1; primes[next_prime]!=1; next_prime++);
        if(next_prime == m) {
            wait_for_it = true;
        }
    }
    cout << (wait_for_it ? "YES" : "NO") << endl;
    return 0;
}
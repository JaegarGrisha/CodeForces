#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int N = 100000+1;
    int primes[N];
    memset(primes, 0, N*sizeof(int));
    primes[0] = primes[1] = -1;
    for(int i=2; i<=N; i++) {
        primes[i] = 1;
        for(int j=i*2; j<=N; j+=i) {
            primes[j] = -1;
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int n_ = n;
        int factors[2];
        factors[0] = factors[1] = -1;
        int factors_idx = 0;
        for(int i=0; i<=N && i<=n; i++) {
            if(primes[i]==1) {
                if(n_%i==0) {
                    while(n_%i==0) {
                        n_ = n_/i;
                    }
                    factors[factors_idx++] = i;
                    if(factors_idx==2) {
                        break;
                    }
                }
            }
        }
        int a, b, c;
        bool possible = true;
        if(factors[1]!=-1) {
            a = factors[0];
            b = factors[1];
            c = n / (a*b);
            if(a==c || b==c || c==1) {
                possible = false;
            }
        }
        else if(factors[0]!=-1) {
            a = factors[0];
            b = a*a;
            c = n / (a*b);
            if(a*b*c!=n || c<=1 || a==c || b==c) {
                possible = false;
            }
        }
        else {
            possible = false;
        }
        if(possible) {
            cout << "YES" << endl << a << " " << b << " " << c << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
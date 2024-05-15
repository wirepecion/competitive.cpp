#include <bits/stdc++.h>
using namespace std;

void sieve(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin>>n;
    sieve(n);

    return 0;
}
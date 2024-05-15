#include <bits/stdc++.h>
using namespace std;

#define n 100001

vector<int> sieveprime;

void sieve(){
    bool prime[n];
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
          sieveprime.push_back(p);
}

void fund(int x){
        int ct = 0;
        for(int i = 0;i < sieveprime.size() && sieveprime[i] * sieveprime[i] <=x ; i++){
            if(x%sieveprime[i] == 0){

                while(x%sieveprime[i] == 0){
                    x/=sieveprime[i];
                    ct++;
                }
            }
        }

        if(x>1){
            ct++;
        }
        cout<<ct<<"\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    sieve();

    int t;cin>>t;
    int x;
    while(t--){
        cin>>x;
        fund(x);
    }    
    return 0;
}
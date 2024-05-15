#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    set<int>achilles;

    ll a,b,A,B;
    cin >> a >> b ;


    // pow in
    for(ll i = 1 ; i <= sqrt(b);i++){
        A = i*i;
        for(ll j = 1 ; j <= 300 ;j++){
            B = j*j*j;
            if(A * B > b )break ;
            if(A * B >= a)achilles.insert(A * B) ;
        }
    }

    // ach chec;
    for(ll i = 1 ; i <= sqrt(b);i++){
        ll sum = i ;
        for(ll j = 1 ; j <= 100 ;j++){
            sum *= i ;
            if(sum > b)break;
            achilles.erase(sum);
        }
    }
    cout << achilles.size();

    return 0 ;
}
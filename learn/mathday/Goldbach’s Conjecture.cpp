#include <bits/stdc++.h>
using namespace std;

int main(){

    // create vector of prime

    int n=1,p=98,count,max=300001;
    vector <bool> prime(max,true);
    for(int i=3;i<max;i+=2)
        if(prime[i])
            for(int j=2*i;j<max;j+=i)
                prime[j]=false;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p;
        count=0;
        if (p==4) cout<<"1"<<"\n";
        else
        {
            for(int j=3;j<=p/2;j+=2){
                if(prime[j] && prime[p-j]) {
                    count++;
                    //cout<<j<<'+'<<p-j<<'\n';
                }
                
            }
            cout<<count<<"\n";
        }
    }
    return 0;

}

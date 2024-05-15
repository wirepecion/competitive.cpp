#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,sum=0,mx=0;
    cin >> n;
    vector<int> v,A(n);
    for(int i=0;i<n;i++) 
    {
    cin >> x;
    v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        A[i] = sum;
        if(sum<0) sum=0;
        mx = max(mx,sum);
    }
    if(mx==0) cout <<"Empty sequence";
    else 
    {
        int r = max_element(A.begin(),A.end())-A.begin();
        int l = r;
        while(A[l]>0) l--;

        for(int i=l+1; i<=r; i++) 
        {
        cout << v[i] << " ";
        }
        cout <<"\n"<< mx;
    }
    return 0;
}
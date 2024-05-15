#include<bits/stdc++.h>
using namespace std;

//Binary Search
int bisearch(int arr[], int l,int r,int x){
    if(l<=r){
        int m = (l+r)/2;
        if(x==arr[m])
            return m;
        if(x> arr[m])
            return bisearch(arr,m+1,r,x);
        else
            return bisearch(arr,l,m-1,x);
    }
    return -1;
}

int main(){

    int n,q,x;
    cin >> n >> q;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    while(q--){
        cin >> x;
        int lo = bisearch(arr,0,n-1,x);
        if(lo==-1)
            cout << "N" << "\n";
        else
            cout << "Y" << "\n";
    }
    

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n,i,j,k=0;

void merge(int arr[],int a,int b,int c){
    int n1 = b-a+1;
    int n2 = c-b;
    int X[n1],Y[n2];
    for(int i=0;i<n1;i++){
        X[i]= arr[a+i];
    }
    for(int i=0;i<n2;i++){
        Y[i]= arr[b+1+i];
    }
    i=0,j=0,k=a;

    while(i<n1&&j<n2){
        if(X[i]<=Y[j]){
            arr[k]=X[i];
            i++;
        }else{
            arr[k]=Y[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        arr[k]=X[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k]=Y[j];
        j++;
        k++;
    }
    
}

void mergesort(int arr[],int start,int end){
    if(start<end){
        int mid = (start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }

}

int main(){
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    mergesort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
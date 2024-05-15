#include <iostream>

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

    int x;
    int arr[]={1,3,4,6,7,9,11,12,20,100};

        scanf("%d",x);
        int lo = bisearch(arr,0,10-1,x);
        if(lo==-1)
            printf("-1\n");
        else
            printf("%d\n",lo+1);
    
	return 0;
}
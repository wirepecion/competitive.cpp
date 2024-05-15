#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int start, int mid, int end){
    int i = start, j = mid, k = start;
    int count = 0;

    while(i <= mid - 1 && j <= end){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            count += mid - i;
        }
    }

    while(i <= mid - 1){
        temp[k++] = arr[i++];
    }

    while(j <= end){
        temp[k++] = arr[j++];
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i];
    }

    return count;
}

int mergesort(int arr[], int temp[], int start, int end){
    int count = 0;
    if(start < end){
        int mid = (start + end) / 2;
        count += mergesort(arr, temp, start, mid);
        count += mergesort(arr, temp, mid + 1, end);
        count += merge(arr, temp, start, mid + 1, end);
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n], temp[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << mergesort(arr, temp, 0, n - 1) << endl;
    return 0;
}

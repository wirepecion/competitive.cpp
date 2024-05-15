#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right) {
    int Count = 0;
    int i = left, j = mid, k = left;
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            Count += mid - i;
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return Count;
}

int mergeSort(int arr[], int temp[], int left, int right) {
    int Count = 0;
    if (right > left) {
        int mid = (left + right) / 2;
        Count += mergeSort(arr, temp, left, mid);
        Count += mergeSort(arr, temp, mid + 1, right);
        Count += merge(arr, temp, left, mid + 1, right);
    }
    return Count;
}

int main() {
    int n, ct = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp[n];
    int inv = mergeSort(arr, temp, 0, n - 1);
    cout << inv;
}

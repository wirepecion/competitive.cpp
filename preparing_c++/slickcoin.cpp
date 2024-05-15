#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin >> n;

  int mn[n], mx[n], arr[n];  
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  mn[0] = arr[0];
  mx[n-1] = arr[n-1];

  for(int i=1; i<n; i++) {
    mn[i] = min(mn[i-1], arr[i]);
  }

  for(int i=n-2; i>=0; i--) {
    mx[i] = max(mx[i+1], arr[i]);
  }

  int ans=0;
  for(int i=0; i<n; i++) {
    if(i!=0) {
        ans = max(ans, mx[i]-mn[i-1]);
        }
    if(i!=n-1) {
        ans = max(ans, mx[i+1]-mn[i]);
        }
  }

  cout << ans;
  
  return 0;
}
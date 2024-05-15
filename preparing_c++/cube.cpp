#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  for(int i=1; i<=2*n-1; i++) {
    for(int j=0; j<n-i && i<n; j++) cout << '-';

    if(i==1 || i==2*n-1 || i==n) {
      for(int j=1; j<=n; j++) cout << '*';
    }else {
      cout << '*';
      for(int j=1; j<=n-2; j++) cout << '-';
      cout << '*';
    }

    for(int j=1; j<=n-abs(n-i)-2 && i>2 && i<2*n-2; j++) {
      cout << '-';
    }
    if(i!=1 && i!=2*n-1) {
      cout << '*';
    }
    cout <<"\n";
  }

  return 0;
} 
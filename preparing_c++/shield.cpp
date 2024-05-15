#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;int x;
    cin>>c>>x;

    for(int i = -x; i <= x ; i++){
            for(int j = -x; j <= x ; j++){

                if( i == 0 || j == 0 || abs(i-j) == 0 || -i==j){
                    cout<<"+";
                }else  if (abs(i) + abs(j) <= x) {
                cout<<c;
                }      
                else{
                    cout<<".";
                }

            }
            cout<<"\n";
    }

}
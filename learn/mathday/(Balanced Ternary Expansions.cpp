#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,fl,index;
    cin >> n;
    int num[3];
    for(int i = 0;i < n ;i++){
        cin >> x;
        index = 0;

        if( x > -1) fl = 1;
        else 
        {
            fl = -1;
            x = -x;
        }

        while(x!=0){
            num[index] = x % 3;
            x = x/3;
            //cout << num[index] << " ";
            index++;
        }

        for (int j = 0; j > 0;j++){
            if(num[j]==3){
                num[j]= 0;
                num[j+1]++;
            }else if(num[j]==2){
                num[j]= -1;
                num[j+1]++;
            } 
            if(num[j]>0){
                index++;
            }
            //cout<<":"<<num[j];
        }
            for(int j = index-1 ; j >=0 ;j--){
                cout << num[j] * fl << " ";
            }
            cout << "\n";
        }
    }
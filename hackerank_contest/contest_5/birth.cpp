#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int i,j,li,sum =0;
    char ch;
    for (i=1;i<32;i*=2){
        li =0;
        for (j=1;j<32;j++){
            if((j&i)==i){
                cout <<j;
                li++;
                if(li%5==0) cout<< "\n";
            }}
        do{
            cout<< "Is it in table? [y/n]";
            cin >>ch;
        }
        while(!(ch=='y'||ch=='n'));
            if(ch=='y') sum+=i;
        cout << "\n";
        }
        cout<< "\n" << sum;


        /*stack<int>s;
    char c;
    while(5--){
        cin >> c;
        if(c=='Y')
        {
            s.push(1);
        }
        else if(c=='N')
        {
            s.push(0);
        }
    }
    while(5--){
        cout << s.top();
        s.pop();
    }
    */


    return 0;
}

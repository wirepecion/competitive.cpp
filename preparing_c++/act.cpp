#include <bits/stdc++.h>
using namespace std;

struct datat
{
    /* data */
    int start,end;
};

bool cmp(datat a, datat b){
    return a.end < b.end;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

        /* code */
        int n;cin>>n;
        vector<datat> time(n);
        for(int i=0;i<n;i++){
            cin>>time[i].start>>time[i].end;
        }
        // for(int i=0;i<n;i++){
        //     cin>>time[i].end;
        // }
        
        sort(time.begin(),time.end(),cmp);

        int ent=0,ans=0;
        for(int i=0;i<n;i++){
            if(time[i].start >= ent){
                ans++;
                ent = time[i].end;
            }
        }
        cout<<ans<<"\n";
        time.clear();
    

    return 0;
    
}
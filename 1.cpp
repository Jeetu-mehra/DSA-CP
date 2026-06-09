#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int ans=INT_MAX;
        if(n%(x+y)==0){
            ans=min(ans,n/(x+y));
        }
        else ans=min(ans,n/(x+y)+1);

        if(n<=x*z){
            if(n%x==0){
                ans=min(ans,n/x);
            }
            else ans=min(ans,(n/x)+1);
        }
        else{
            if((n-(x*z))%(x+10*y)==0){
                ans=min(ans,z+((n-(x*z))/(x+10*y)));
            }
            else ans=min(ans,z+(((n-(x*z))/(x+10*y))+1));

        }

        cout<<ans<<"\n";        
    }
    return 0;
}
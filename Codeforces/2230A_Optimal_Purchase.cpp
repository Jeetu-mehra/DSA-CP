#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans=0;
        if(c>=3*b){
            ans=a*b;
        }
        else{
            long long x=a%3;
            long long y=a/3;
            ans+=y*c;
            if(x*b<c){
                ans+=x*b;
            }
            else{
                ans+=c;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
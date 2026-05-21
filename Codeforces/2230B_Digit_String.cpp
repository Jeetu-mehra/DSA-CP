#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int dp0=0,dp1=0;
        for(auto c:s){
            if(c=='2'){
                dp0++;
            }
            else if(c=='3' || c=='1'){
                dp1=max(dp0,dp1)+1;
            }
        }
        int mx=max(dp0,dp1);
        int mn=s.size()-mx;

        cout<<mn<<endl;
        
    }
    return 0;
}
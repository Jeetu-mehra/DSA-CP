#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        long long ans=0;
        for(int i=1;i<=n;i++){
            long long m=n/i;
            ans+=(m*m);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
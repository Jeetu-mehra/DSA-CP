#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) c0++;
            else if(a[i]==1) c1++;
            else c2++;
        }
        int ans=0;
        ans+=c0;
        int p=min(c1,c2);
        ans+=p;
        c1-=p;
        c2-=p;
        ans+=c1/3;
        ans+=c2/3;
        cout<<ans<<endl;        
    }
    return 0;
}
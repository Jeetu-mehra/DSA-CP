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
        int m=a[0];
        int ans=m;
        for(int i=1;i<n;i++){
            m=min(m,a[i]);
            ans+=m;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
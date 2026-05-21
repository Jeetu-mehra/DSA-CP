#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n,x,y,k;
        cin>>n>>x>>y>>k;
        long long d=min(n-abs(y-x),abs(y-x));        
        if(n<4) cout<<d<<endl;
        else cout<<d +k<<endl;
    }
    return 0;
}
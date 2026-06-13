#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> h(n);
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>h[i];
            mx=max(mx,h[i]);
            mn=min(mn,h[i]);
        }
        cout<<mx-mn+1;
        cout<<endl;        
    }
    return 0;
}
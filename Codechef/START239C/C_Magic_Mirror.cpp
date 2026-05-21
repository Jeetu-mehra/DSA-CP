#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int targetsum=a[0]+a[n-1];
        bool flag=true;
        for(int i=0;i<n/2;i++){
            if(a[i]+a[n-1-i]!=targetsum){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end(),[](int a,int b){
            return a>b;
        });
        vector<int> a{b[0],b[1]};
        int k=n-2;
        int i=0;
        while(k--){
            a.push_back((a[i]%a[i+1]));
            i++;
        }
        if(a==b) cout<<b[0]<<" "<<b[1];
        else cout<<-1;
        cout<<endl;        
    }
    return 0;
}
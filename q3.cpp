#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,x;
        cin>>a>>b>>x;
        vector<long long> v1,op1;
        vector<long long> v2,op2;
        long long c=a,op=0;
        while(true){
            v1.push_back(c);
            op1.push_back(op);
            if(c==0) break;
            c/=x;
            op++;
        }
        c=b,op=0;
        while(true){
            v2.push_back(c);
            op2.push_back(op);
            if(c==0) break;
            c/=x;
            op++;
        }
        long long ans=max(a,b);
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                long long q=abs(v1[i]-v2[j])+op1[i]+op2[j];
                ans=min(ans,q);
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
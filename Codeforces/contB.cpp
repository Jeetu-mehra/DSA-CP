#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long k=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                k=max(k,a[i]-a[i+1]);
            }
        }
        if(k==0){
            cout<<"yes"<<endl;
            continue;
        }
        vector<long long> b=a;
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(b[i+1]<b[i]){
                b[i+1]+=k;
            }
        }
        long long prev=a[0];
        for(int i=0;i<n;i++){
            long long op1=a[i];
            long long op2=a[i]+k;
            if(op1>=prev){
                prev=op1;
            }
            else if(op2>=prev){
                prev=op2;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
    }
    return 0;
}
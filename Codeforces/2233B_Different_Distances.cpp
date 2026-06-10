#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(4*n);
        for(int i=0;i<n;i++){
            a[i]=i+1;
            a[i+n]=i+1;
            a[i+3*n]=i+1;
        }
        if(n%2==0){
            for(int i=0;i<n;i++){
                a[i+2*n]=n-i;
            }
        }
        else{
            for(int i=0;i<n;i++){
                a[i+2*n]=(i+1)%n+1;
            }
        }
        for(int i=0;i<4*n;i++){
            cout<<a[i]<<" ";
        }


        
    }
    return 0;
}
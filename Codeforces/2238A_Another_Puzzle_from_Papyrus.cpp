#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,c;
        cin>>n>>c;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]-b[i]>=0) sum+=(a[i]-b[i]);
            else {
                sum=INT_MAX;
                break;
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sum2=0;
        for(int i=0;i<n;i++){
            if(a[i]-b[i]>=0) sum2+=(a[i]-b[i]);
            else {
                sum2=INT_MAX;
                break;
            }
        }
        if(sum==INT_MAX && sum2==INT_MAX) cout<<-1;
        else{
            cout<<min(sum,sum2+c);
        }
        cout<<endl;
        
    }
    return 0;
}
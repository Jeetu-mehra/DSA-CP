#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        int low=n,high=2*n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[i]=high;
                high--;
            }
            else{
                a[i]=low;
                low--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
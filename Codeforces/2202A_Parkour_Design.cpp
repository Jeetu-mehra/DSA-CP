#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        if((x+y)%3==0 && x >= 2 * y && x >= -4 * y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool checkpali(long long n){
    string s=to_string(n);
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long b=0;
        long long a=n-b;
        bool flag=false;
        while(b<=n && b <= 20000){
            a=n-b;
            if(checkpali(a)){
                flag=true;
                break;               
            }
            else {
                b=b+12;
            }
        }
        if(flag) cout<<a<<" "<<b;
        else cout<<-1;
        cout<<endl;        
    }
    return 0;
}
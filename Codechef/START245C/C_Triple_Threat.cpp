#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    string s(3*n,'0');
	    vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(x>0){
                v[i]=1;
                x--;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(x>0 && v[i]==1){
                v[i]=2;
                x--;
            }
            if(x>0 && v[i]==2){
                v[i]=3;
                x--;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>=1) s[i]='1';
            if(v[i]>=2) s[i+n]='1';
            if(v[i]>=3) s[i+2*n]='1';
        }
	    cout<<s;
	    cout<<endl;
	}

}

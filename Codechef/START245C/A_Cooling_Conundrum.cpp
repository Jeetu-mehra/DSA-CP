#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ans=0;
	    int time=0;
	    while(x>y){
	        if(x%10==0) time=x/10;
	        else time=x/10+1;
	        ans+=time;
	        x--;
	    }
	    cout<<ans;
	    cout<<endl;
	}

}

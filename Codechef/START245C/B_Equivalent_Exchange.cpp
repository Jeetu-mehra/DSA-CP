#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> A(n);
	    int sum=0;
	    int mxs=0,mns=0;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        sum+=A[i];
	        mxs=max(mxs,sum);
	        mns=min(mns,sum);
	    }
	    int minred=max(0,-mns);
	    int minblue=max(0,mxs);
	    if((minred+minblue)<=k) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	    
	    
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n,0);
	    unordered_map<int,int> fidx;
	    unordered_map<int,int> lidx;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(fidx.find(a[i])==fidx.end()){
	            fidx[a[i]] = i;
	        }
	        lidx[a[i]] = i;
	    }
	    int ans=INT_MAX;
        for (auto const& p : fidx) {
            int val = p.first;
            int first = p.second;
            int last = lidx[val];

            if (first != last) {
                int cmoves = first + (n - 1 - last);
                ans = min(ans, cmoves);
            }
        }
	    if(ans==INT_MAX) cout<<-1;
	    else cout<<ans;
	    cout<<endl;
	}

}

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char ch){
    ch=tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        if(isvowel(s[i])) count=0;
	        else {
	            count++;
	            if(count==4){
	                flag=true;
	                break;
	            }
	        }
	    }
	    if(flag) cout<<"Yes";
	    else cout<<"No";
	    cout<<endl;
	}

}

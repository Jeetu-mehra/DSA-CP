#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag=true;
        vector<int> count_ones(k, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count_ones[i % k]++;
            }
        }
        for (int i = 0; i < k; i++) {
            if (count_ones[i] % 2 != 0) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<endl;       
    }
    return 0;
}
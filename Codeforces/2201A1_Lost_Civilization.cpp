#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> st; 
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.back() == a[i] + 1) {
                st.pop_back();
            }
            st.push_back(a[i]);
        }
        cout << st.size() << "\n";
        
    }
    return 0;
}
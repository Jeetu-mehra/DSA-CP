#include<bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O to ensure it doesn't Time Limit Exceeded (TLE)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> p(n);
        vector<int> v1,v2;
        
        for(int i=0;i<n;i++){
            cin>>p[i];
            if(i>=x && i<y) {
                v1.push_back(p[i]);
            }
            else v2.push_back(p[i]);
        }        
        
        // Edge case: If nothing is inside the portals, array cannot change
        if(v1.empty()){
            for(int i=0; i<n; i++) {
                cout << p[i] << (i == n-1 ? "" : " ");
            }
            cout << "\n";
            continue;
        }

        int m = v1.size();
        vector<int> best_ans; 

        // Try every possible cyclic shift of v1
        for(int shift = 0; shift < m; shift++) {
            vector<int> current_ans;
            int j = 0, k = 0;
            
            // Greedily merge the elements of v1 (shifted) and v2
            while(j < m || k < v2.size()){
                if(j < m && k < v2.size()){
                    if(v1[(shift + j) % m] < v2[k]){
                        current_ans.push_back(v1[(shift + j) % m]);
                        j++;
                    }
                    else{
                        current_ans.push_back(v2[k]);
                        k++;
                    }
                }
                else if(j < m){
                    current_ans.push_back(v1[(shift + j) % m]);
                    j++;
                }
                else{
                    current_ans.push_back(v2[k]);
                    k++;
                }
            }

            // Keep the lexicographically smallest vector
            if(best_ans.empty() || current_ans < best_ans) {
                best_ans = current_ans;
            }
        }

        // OUTPUT: This is inside the T loop, so it will print for every testcase
        for(int i=0; i<n; i++){
            cout << best_ans[i] << (i == n-1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}
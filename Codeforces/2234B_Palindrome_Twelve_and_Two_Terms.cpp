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
        bool found=false;
        for (long long a = 0; a <= 1000000; ++a) {
                if (a > n) break; // 
                
                if (checkpali(a)) {
                    long long b = n - a;
                    if (b % 12 == 0) {
                        cout << a << " " << b << "\n";
                        found=true;
                        break;
                    }
                }
            }
            if (!found) {
                cout << -1 << "\n";
            }
            
    }
    return 0;
}
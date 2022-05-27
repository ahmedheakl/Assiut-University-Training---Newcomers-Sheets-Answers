#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define all(v)	 ((v).begin()), ((v).end())
#define rall(v) (((v).rbegin()), ((v).rend())
#define d(x) double(x)
#define pb(x) push_back(x)
#define sz(x) x.size()
#define fi first
const int MAX_N=51;
ll n, dp[MAX_N]={};
 
 
 
int main(){
    int t; cin >> t;
    while(t--){
       cin >> n;
        vector<int> a(n);
        int ans=0;
        for(int i=0;i<n;++i) cin >> a[i];
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
              bool ok=true;
              for(int k=i;k<j;++k) if(a[k]>a[k+1]) ok=false;
              ans+=ok;
            }
        }
        cout << ans << endl;
    }
 
 
 
 
 
 
 
}
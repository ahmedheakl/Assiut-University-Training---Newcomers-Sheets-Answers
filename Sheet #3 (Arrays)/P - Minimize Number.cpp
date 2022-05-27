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
    cin >> n;
    vector<int> a(n);
    int ans=INT_MAX;
    for(int i=0;i<n;++i){
        cin >> a[i];
        int cur=0;
        while(a[i]%2==0) a[i]/=2, ++cur;
        ans=min(cur, ans);
    }
    cout << ans;
 
 
 
 
 
 
}
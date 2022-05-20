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
#define se second
 
 
const int MAX_N=4e3+5, M=1e9+7;
 
ll n,a,b,c;
ll dp[MAX_N]={};
 
 
int main(){
    cin >> n >> a >> b >> c;
    ll ar[3]={a,b,c};
    dp[0]=1;
    for(int j=0;j<=n;++j){
        for(int i=0;i<3;++i) if(j+ar[i]<=n&&dp[j]) dp[j+ar[i]]=max(dp[j+ar[i]], dp[j]+1);
    }
    cout << dp[n]-1;
 
}
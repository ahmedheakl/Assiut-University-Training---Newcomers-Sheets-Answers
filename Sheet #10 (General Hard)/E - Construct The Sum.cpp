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
 
 
const int MAX_N=1e6+5, M=1e9+7;
 
ll n,m, t, x,y, s;
int i;
char b;
vector<ll> ans;
vector<bool> vis;
 
void solve(ll s){
    if(s<=0) return;
    while((vis[n]||s<n)&&n>=0) --n;
    if(n<0) return;
    vis[n]=true;
    ans.pb(n);
    solve(s-n);
}
 
ll calc(ll x){
    if(x&1) return ((x+1)/2)*x;
    return (x/2)*(x+1);
} 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> s;
        if(s>calc(n)) cout << "-1";
        else{
            vis=vector<bool>(n+1, false);
            solve(s);
            cout << sz(ans) << " ";
            for(int i=0;i<sz(ans);++i){
                if(i<sz(ans)-1) cout << ans[i] << " ";
                else cout << ans[i];
            }
 
            ans.clear();
        }
        if(t>0) cout << endl;
    }
 
 
 
 
 
 
}
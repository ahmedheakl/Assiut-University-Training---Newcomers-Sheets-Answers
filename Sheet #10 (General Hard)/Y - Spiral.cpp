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
 
ll n,m;
// 0, R
// 1, D
// 2, L
// 3, U
map<int, int> mp;
vector<vector<ll>> a;
vector<ll> ans;
vector<vector<bool>> vis;
bool valid(ll x, ll y){return x>=0&&y>=0&&x<n&&y<m;}
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(ll z, int p){
    ll y=z%m;
    ll x=z/m;
    ans.pb(a[x][y]);
    vis[x][y]=true;
    ll nx=x+dx[p];
    ll ny=y+dy[p];
    if(valid(nx, ny)&&!vis[nx][ny]) dfs(z+mp[p], p);
    else{
        p=(p+1)%4;
        nx=x+dx[p];
        ny=y+dy[p];
        if(valid(nx, ny)&&!vis[nx][ny]) dfs(z+mp[p],p);
    }
}
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    mp[0]=1;
    mp[1]=m;
    mp[2]=-1;
    mp[3]=-m;
    a=vector<vector<ll>>(n, vector<ll>(m));
    vis=vector<vector<bool>>(n, vector<bool>(m, false));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cin >> a[i][j];
    }
    dfs(0, 0);
    for(auto e: ans) cout << e << " ";
}
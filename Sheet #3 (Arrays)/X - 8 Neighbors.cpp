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
ll n, m;
bool valid(int x, int y){return x>=0&&y>=0&&x<n&&y<m;}
int dx[]={0, 0, -1, -1, -1, 1, 1, 1};
int dy[]={-1, 1, -1, 0, 1, -1, 0, 1};
 
 
 
int main(){
    cin >> n >> m;
    vector<vector<char>> graph(n, vector<char>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cin >> graph[i][j];
    }
    int x,y; cin >> x >> y, --x, --y;
    bool ok=true;
    for(int i=0;i<8;++i){
        int nx=x+dx[i], ny=y+dy[i];
        if(!valid(nx,ny)) continue;
        ok&=graph[nx][ny]=='x';
    }
    if(ok) cout << "yes";
    else cout << "no";
}
 
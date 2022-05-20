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
vector<vector<char>> graph;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    graph=vector<vector<char>>(n, vector<char>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> graph[i][j];
            if(graph[i][j]=='.'){
                if((i+j)%2==0) graph[i][j]='B';
                else graph[i][j]='W';
            }
        }
    }
    for(auto e: graph){
        for(auto u: e) cout << u;
        cout << endl;
    }
 
}
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
 
ll n,m, t, x,y;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    string s;
    vector<vector<int>> b(m, vector<int>(n)), a(n, vector<int>(m));
    vector<int> mx(m);
    for(int i=0;i<n;++i){
        cin >> s;
        for(int j=0;j<m;++j){
            a[i][j]=s[j], b[j][i]=s[j];
        }
    }
    for(int i=0;i<m;++i) mx[i]=*max_element(all(b[i]));
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]==mx[j]){
                ++cnt; break;
            }
        }
    }
    cout << cnt; 
}
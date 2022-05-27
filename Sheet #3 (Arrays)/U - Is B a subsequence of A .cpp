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
 
 
 
int main(){
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0;i<n;++i) cin >> a[i];
    for(int i=0;i<m;++i) cin >> b[i];
    int l=0, ok=1;
    for(auto e: b)if(ok){
        auto it= find(a.begin()+l, a.end(), e);
        if(it!=a.end()) l=distance(a.begin(), it)+1;
        else ok=false;
    }
    if(!ok) cout << "NO";
    else cout << "YES";
}
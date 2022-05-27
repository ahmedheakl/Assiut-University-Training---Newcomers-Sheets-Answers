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
 
const int MAX_N=1e3+5;
int n;
 
void solve(int x=1){
    if(x==n+1) return;
    int sp=(n-x), dot=2*x-1;
    for(int i=0;i<sp;++i) cout << " ";
    for(int i=0;i<dot;++i) cout << "*";
    if(x<n) cout << endl;
    solve(x+1);
 
}
 
int main(){
    cin >> n;
    solve();
 
}
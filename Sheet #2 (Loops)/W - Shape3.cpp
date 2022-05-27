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
 
ll a,b,c,d,n;
 
void solve1(int x=1){
    if(x==n+1) return;
    int sp=(n-x), dot=2*x-1;
    for(int i=0;i<sp;++i) cout << " ";
    for(int i=0;i<dot;++i) cout << "*";
    cout << endl;
    solve1(x+1);
 
}
 
void solve2(int x=1){
    if(x==n+1) return;
    solve2(x+1);
    int sp=(n-x), dot=2*x-1;
    for(int i=0;i<sp;++i) cout << " ";
    for(int i=0;i<dot;++i) cout << "*";
    if(x>1) cout << endl;
 
 
}
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    solve1();
    solve2(); 
 
}
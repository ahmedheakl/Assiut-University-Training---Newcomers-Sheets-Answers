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
const int MAX_N=1e3+2;
ll n, m, a,b;
 
int check(int a){
    string x=to_string(a);
    for(auto e: x) if(!(e=='4'||e=='7')) return false;
    return true;
}
 
 
 
int main(){
    cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;++i){
        if(check(i)) ++cnt, cout << i << " ";
    }
    if(!cnt) cout << -1;
 
}
 
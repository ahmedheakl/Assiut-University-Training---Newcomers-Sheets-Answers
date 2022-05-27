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
ll n;
int main(){
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;++i) cin >> a[i], b[i]=a[i];
    reverse(all(a));
    if(b==a) cout << "YES";
    else cout << "NO";
 
 
 
}
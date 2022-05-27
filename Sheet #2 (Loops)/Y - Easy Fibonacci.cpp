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
ll n, m;
 
 
 
int main(){
   cin >> n;
   ll a[46];
   a[0]=0, a[1]=1;
   for(int i=2;i<=45;++i) a[i]=a[i-1]+a[i-2];
   for(int i=0;i<n;++i) cout << a[i] << " ";
 
}
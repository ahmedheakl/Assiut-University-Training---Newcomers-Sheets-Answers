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
int a[MAX_N]={};
ll n;
int main(){
   cin >> n;
   for(int i=2;i<=n;++i){
        if(a[i]) continue;
        cout << i << " ";
        for(int j=i*2;j<=n;j+=i) a[j]=1;
   }
 
 
}
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
    int b;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    for(auto e: a){
        if(e<0) cout << "2 ";
        else if(e>0) cout << "1 ";
        else cout << e << " ";
    }
 
 
}
 
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
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    ll d1=0, d2=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
            if(i==j) d1+=a[i][j];
            if(i+j==n-1) d2+=a[i][j];
        }
    }
    cout << abs(d1-d2);
 
 
 
 
 
 
 
}
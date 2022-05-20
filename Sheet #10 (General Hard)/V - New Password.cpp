# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define all(v)	 ((v).begin()), ((v).end())
#define rall(v) (((v).rbegin()), ((v).rend())
#define FOR(z) for(int i = 0; i < z; ++i)
#define vi vector<int>
#define vll vector<long long int>
#define f(x) double(x)
#define pb(x) push_back(x)
 
const int MAX_N =2502, LVL=18;
const ll INF=1e17;
int k, n, m;
 
 
 
int main(){
    cin >> n >> k;
    string ans="";
    for(int i=0;i<k;++i){
        ans+=('a'+i);
    }
    for(int i=0;i<(n-k);++i){
        if(i&1) ans+='b';
        else ans+='a';
    }
    cout << ans;
 
 
}

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
ll n, dp[MAX_N]={};
 
 
 
int main(){
    int a, b;
    cin >> a >> b;
     string s; cin >> s;
     if(sz(s)<a+b+1) cout << "No";
     else {
        for(int i=0;i<sz(s);++i){
            if(i==a&&s[i]=='-') continue;
            if((i==a&&s[i]!='-')||!isdigit(s[i])){
                cout << "No"; return 0;
            }
         }
          cout << "Yes";
     }
 
 
 
 
 
 
}
 
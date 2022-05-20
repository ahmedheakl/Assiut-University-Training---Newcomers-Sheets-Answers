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
 
ll n,m, t, x,y;
char b;
 
bool check(string s){
    for(int i=0;i<sz(s)-1;++i) if(s[i]==s[i+1]) return true;
    return false;
}
 
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2; cin >> s1 >> s2;
    if(sz(s1)!=sz(s2)) cout << "NO";
    else if(s1==s2){
        sort(all(s1));
        cout << (check(s1)?"YES":"NO");
    }
    else{
        int cnt=0, l=-1, r=-1;
        for(int i=0;i<sz(s1);++i){
            if(s1[i]!=s2[i]&&l==-1) l=i, ++cnt;
            else if(s1[i]!=s2[i]&&r==-1)  r=i, ++cnt;
            else if(s1[i]!=s2[i]) ++cnt;
        }
        if(cnt!=2) cout << "NO";
        else if(s1[l]==s2[r]&&s1[r]==s2[l])cout << "YES";
        else cout << "NO";
    }
 
 
 
 
 
}
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
 
const ll mod = 1e9+7;
int main(){
    string s;
    cin >> s;
    int i=0;
    while(isdigit(s[i])) ++i;
    int ans;
    if(s[i]=='*') ans=stoi(s.substr(0,i))*stoi(s.substr(i+1,sz(s)-i));
    else if(s[i]=='+') ans=stoi(s.substr(0,i))+stoi(s.substr(i+1,sz(s)-i));
    else if(s[i]=='-') ans=stoi(s.substr(0,i))-stoi(s.substr(i+1,sz(s)-i));
    else ans=stoi(s.substr(0,i))/stoi(s.substr(i+1,sz(s)-i));
    cout << ans;
}
 
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
    string a,b,c;
    char s1,s2;
    cin >> a >> s1 >> b >> s2 >> c;
    ll a1=stoi(a), b1=stoi(b), c1=stoi(c);
    if(s1=='+'){
        if(stoi(a)+stoi(b)==stoi(c)) cout << "Yes";
        else cout << a1+b1;
    }else if(s1=='-'){
        if(a1-b1==c1) cout << "Yes";
        else cout << a1-b1;
    }else{
        if(a1*b1==c1) cout << "Yes";
        else cout << a1*b1;
    }
}
 
 
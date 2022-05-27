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
    int a;
    cin >> a;
    int f=a%10, s=a/10;
    if(f%s==0||s%f==0) cout << "YES";
    else cout << "NO";
 
}
 
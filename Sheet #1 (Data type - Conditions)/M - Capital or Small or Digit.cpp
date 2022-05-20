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
    char a;
    cin >> a;
    if(a>=48&&a<=57) cout << "IS DIGIT";
    else{
        cout << "ALPHA\n";
        if(isupper(a)) cout << "IS CAPITAL";
        else cout << "IS SMALL";
    }
}
 
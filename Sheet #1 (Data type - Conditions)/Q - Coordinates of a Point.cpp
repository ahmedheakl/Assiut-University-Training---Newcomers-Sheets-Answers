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
    double x,y;
    cin >> x >> y;
    if(x==0.0&&y==0.0) cout << "Origem";
    else if(x==0.0) cout << "Eixo Y";
    else if(y==0.0) cout << "Eixo X";
    else if(x>0.0&&y>0.0) cout << "Q1";
    else if(x<0.0&&y>0.0) cout << "Q2";
    else if(x<0.0&&y<0.0) cout << "Q3";
    else cout << "Q4";
}
 
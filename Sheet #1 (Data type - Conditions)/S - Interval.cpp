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
    double x;
    cin >> x;
    if(x>=0.0&&x<=25.0) cout << "Interval [0,25]";
    else if(x>25.0&&x<=50.0) cout << "Interval (25,50]";
    else if(x>50.0&&x<=75.0) cout << "Interval (50,75]";
    else if(x>75.0&&x<=100.0) cout << "Interval (75,100]";
    else cout << "Out of Intervals";
}
 
 
#include <bits/stdc++.h>
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
#define endl "\n"
const int MAX_N=200001, M=1e9+7, MAX_CHAR=26;
int t,n, m, x, k;
int r1,r2,c1,c2,d1,d2;
 
bool valid(int x){return x>0&&x<=9;}
bool check(int x1, int x2, int y1, int y2){return x1+y2==d1&&x2+y1==d2&&x1!=x2&&x1!=y1&&x1!=y2&&x2!=y1&&x2!=y2&&y1!=y2;}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    if(r1+r2!=c1+c2) cout <<-1;
    else{
        for(int x1=1;x1<10;++x1){
            int x2=r1-x1, y1=c1-x1, y2=(c2-r1)+x1;
            if(valid(x2)&&valid(y1)&&valid(y2)&&check(x1, x2, y1, y2)){
                cout << x1 << " " << x2 << endl << y1 << " " << y2;
                return 0;
            }
        }
        cout << -1;
    }
 
}
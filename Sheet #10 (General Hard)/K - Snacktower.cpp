#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   int n, val;
   cin >> n;
   int vis[n + 1]{};
   int wanted = n;
   for(int i = 0; i < n; i++){
    cin >> val;
    vis[val] = 1;
    if(val == wanted){
        for(int j = val; j >= 1; j--){
            if(vis[j] == 0) break;
            cout << j << " ";
            wanted = j - 1;
        }
    }
    cout << endl;
   }
}
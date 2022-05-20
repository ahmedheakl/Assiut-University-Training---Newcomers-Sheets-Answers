#include<bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n, i = 0;
    cin >> n;
    vector<char> a(n);
    vector<char> c = {'R', 'O','Y', 'G', 'B', 'I', 'V'};
    while(i < 7){
            a[i] = c[i];
            ++i; --n;
    }
    while(n--){
       a[i] = a[i-4];
       ++i;
    }
    for(auto it: a) cout << it;
 
}
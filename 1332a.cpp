// Easy if clause to find if the moves are required to
// go out of bound

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n;
    int a,b,c,d;
    int x,y,x1,x2,y1,y2;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        if(a - b > x - x1 || b - a > x2 - x || c - d > y - y1 || d - c > y2 - y || (a && b && a - b == x - x1 && a - b == x - x2) || (c && d && c - d == y - y1 && c - d == y - y2)){
            cout << "NO\n";
        } 
        else{
            cout << "YES\n";
        }
    }
    return 0;
}

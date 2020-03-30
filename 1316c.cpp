// Find any coefficient that is coprime to p in the two polynomials
// Add the index of the two then it's the answer

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int n,m,p;
    cin >> n >> m >> p;
    int tmp;
    int xi = -1,xj = -1;
    for(int i = 0 ; i < n ; i++){
        cin >> tmp;
        if(xi == -1 && tmp % p != 0){
           xi = i;
        }
        
    }
    for(int i = 0 ; i < m ; i++){
        cin >> tmp;
        if(xj == -1 && tmp % p != 0){
            xj = i;
        }
    }
    cout << xi + xj << endl;
    return 0;
}

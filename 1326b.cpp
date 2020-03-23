#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    int tmp,mx;
    int sum = 0;
    cin >> tmp ;
    cout << tmp << " ";
    mx = tmp;
    for(int i = 1 ; i < t ; i++){
        cin >> tmp;
        cout << tmp + mx << " ";
        mx = max(mx,tmp+mx);
    }
    cout << endl;

    return 0;
}

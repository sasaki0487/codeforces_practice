// sort the array in descending order
// larger number - smaller index != small number - larger index
// because index is unique
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        for(auto it : v){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}

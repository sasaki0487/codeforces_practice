// Find the Maximum and minimum existing number in array
// also record the largest difference between adjacent existing numbers
// If the largest difference is larger than max-min/2, than the minimum difference
// can't be modified
// else choose the max-min/2 for the answer
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        int l = INT_MAX, r = -2,dis = -1;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        for(int i = 0 ; i < n - 1 ; i++){
            if(v[i] != v[i+1]){
                if(v[i] == -1){
                    l = min(l,v[i+1]);
                    r = max(r,v[i+1]);
                }
                else if(v[i+1] == -1){
                    l = min(l,v[i]);
                    r = max(r,v[i]);
                }
                else{
                    dis = max(dis,abs(v[i]-v[i+1]));
                }
            }
        }
        if(r == -2){
            cout << "0 0\n";
        }
        else if(dis > (r - l)/2){
            cout << dis << " " << (r+l)/2 << endl;
        }
        else{
            if((r-l) % 2 != 0)
                cout << (r-l+1)/2 << " " << (r+l)/2 << endl;
            else
                cout << (r-l)/2 << " " << (r+l)/2 << endl;
        }
    }
    return 0;
}

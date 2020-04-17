// Create a string that contains b distinct chars of length a
// Make a string whose substring of length a is a rotation of the beforehand created string 
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t,n;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        string s = "";
        for(int i = 0 ; i < a ; i++){
            if(i < b){
                s += 'a' + i;
            }
            else{
                s += 'a' + b -1;
            }
        }
        for(int i = a ; i < n ; i++){
            s += s[i % a];
        }
        cout << s << endl;                                                    
    }
    return 0;
}

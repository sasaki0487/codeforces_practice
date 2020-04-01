// Count the characters of pos i,k+i,2k+i
// Add the characters of pos i , k-i-1 and minus the 
// most appeared character to make the substring 
// palindrome with least move
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int help(int n , int m ,vector<vector<int>> &v){
    int sum = 0,mx = 0;
    for(int i = 0 ; i < 26 ; i++){
        sum += v[n][i]+v[m][i];
        mx = max(mx,v[n][i]+v[m][i]);
    }
    return sum - mx;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n,k;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> k >> s;
        vector<vector<int> >v(k,vector<int> (26,0));
        for(int i = 0 ; i < s.size() ; i++){
            v[i%k][s[i]-'a']++;
        }
        int ans = 0;
        for(int i = 0 ; i < k ; i++){
            ans += help(i,k-i-1,v);
        }
        cout <<  ans / 2 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
long long n, ans, t[2000000], x, y, cur, mi, q;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> q;
    while(q--){
    	cin >> n;
    	for(int  i = 0;i < n;i++){
    		cin >> t[i]; 
       	}
       	mi = t[n-1];
    	for(int i = n-2;i >= 0;i--){
    		if(t[i] > mi)ans++;
    		mi = min(t[i], mi);
    	}
    	cout << ans << endl;
    	ans = 0;    }
}

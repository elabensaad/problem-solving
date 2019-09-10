#include <bits/stdc++.h>
 
using namespace std;
 
long long n, ans = 1e9+5, t[2000000], q[200000], cur, m, f[2000000];
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> m;
    for(int i = 0;i < n;i++){
    	cin >> q[i];
    }
    sort(q,q+n);
    for(int i = 0;i < n;i++){
    	cur = 0; 
    	while(q[i]){
    		if(f[q[i]] < m){
    		t[q[i]]+=cur;
    		f[q[i]]++;
    		}
    		cur++;
    		q[i]/=2;
    	}
    	if(f[q[i]] < m){
    	t[q[i]]+=cur;
    	f[q[i]]++;
    	}
    }
    for(int i = 0;i < 200000;i++){
    	if(f[i] >= m){ans = min(ans, t[i]);}
    }
    cout << ans;
}

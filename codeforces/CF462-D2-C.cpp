#include <bits/stdc++.h>
 
using namespace std;
 
long long n, v, y, m, ans, cur, q, x, t[500000];
string ch, ch1, s;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> t[i];
	sort(t,t+n);
	for(int i = n-2;i >= 0;i--){
		t[i]+=t[i+1];
	}
	ans+=t[0];
	for(int i = 1;i < n;i++){
		ans+=t[i];
		ans+=t[i-1]-t[i];
	}
	cout << ans << endl;
}

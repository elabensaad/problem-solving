#include <bits/stdc++.h>
 
using namespace std;
 
long long n, v, y, m, ans, cur, q, x, t[500000], f[500000];
string ch, ch1, s;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0;i < n;i++)
		cin >> f[i];
	sort(f, f+n); 
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		t[x-1]++;
		t[y]--;    
	}
	for(int i = 1;i < n;i++){
		t[i]+=t[i-1];
	}
	sort(t, t+n);
	for(int i = 0;i < n;i++){
		ans += f[i]*t[i];
	}
	cout << ans << endl;
}

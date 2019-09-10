#include <bits/stdc++.h>
 
using namespace std;
 
long long n, t[500000], x, y, m, ans = 1e9, res;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//memeset(dp, -1, sizeof(dp));
	cin >> n >> x >> y;
	y*=5;
	for(int i = 0;i*x <= n;i++){
		res=n-(i*x);
		ans = min(ans, res%y);
	}
	cout << ans << endl;
}

#include <bits/stdc++.h>
 
using namespace std;
 
long long n, v, y, m, ans, cur, q, x, f[500000];
string ch, ch1, s, t[5000000];
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0;i < n;i++)
		cin >> t[i];
	for(int i = 0;i < m;i++){
		cur = 0;
		for(int j = 0;j < n-1;j++){
			if(f[j] == 0 && t[j][i] > t[j+1][i]) cur = 1;
		}
		if(cur == 0){
			for(int j = 0;j < n-1;j++){
				if(t[j][i] < t[j+1][i]) f[j] = 1;
			}
		}
		ans += cur;
	}
  cout << ans << endl;
}

#include <bits/stdc++.h>
 
using namespace std;
 
int n, m, t[600][600], f[100200], cur, ans = 1e9;
vector <int> v;
 
int main () {
	f[0] = 1;
	f[1] = 1;
	for(int i = 2;i <= 100010;i++){
		if(f[i] == 0){
			v.push_back(i);
			for(int j = 2*i;j <= 100010;j+=i)f[j] = 1;
		}
	}
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> t[i][j];
			//cout << *lower_bound(v.begin(), v.end(), t[i][j]) << ' ';
			cur+=*lower_bound(v.begin(), v.end(), t[i][j])-t[i][j];
		}
		//cout << endl;
		ans = min(ans, cur);
		cur = 0;
	}
	for(int j = 0;j < m;j++){
		for(int i = 0;i < n;i++){
			cur+=*lower_bound(v.begin(), v.end(), t[i][j])-t[i][j];
		}
		//cout << cur << endl;
		ans = min(ans, cur);
		cur = 0;
	}
	cout << ans << endl;
}

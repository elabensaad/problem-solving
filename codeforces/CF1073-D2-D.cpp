#include <bits/stdc++.h>
 
using namespace std;
 
long long n, t[500000], m, mi=1e9+9, s, ans, cur, m1;

int main () {
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> t[i];
		s+=t[i];
		mi = min(mi, t[i]);
	}
	ans = (m/s)*n;
	m%=s;	
	int i = 0;
	while(m >= mi){
		s = 0;
		cur = 0;
		m1 = m;
		for (int i = 0; i < n; i++){
			if (t[i] <= m1){
				m1-=t[i];
				cur++;
				s+=t[i];
			}
		}
		ans+=(m/s)*cur;
		m%=s;
	}
	cout << ans << endl;
}

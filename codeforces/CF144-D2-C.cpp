#include <bits/stdc++.h>
 
using namespace std;
 
long long n, y, m, ans, cur, q, x, ans1, t[50000], l=1e9+11, r, f[50000];
string ch, ch1;

bool sol(){
	for (int i='a';i<='z';i++){
		if (t[i]>f[i])
			return 0;
	}
	return 1;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> ch >> ch1;
	if(ch1.size() > ch.size()){
		cout << 0 << endl;
	}
	else {
		for(int i = 0;i < ch1.size();i++){
			t[ch[i]]++;
			f[ch1[i]]++;
		}
		int ans = sol();
		for (int i=ch1.size();i<ch.size();i++){
			t[ch[i]]++;
			t[ch[i-ch1.size()]]--;
			ans+=sol();
		}
		cout << ans << endl;
	}
}

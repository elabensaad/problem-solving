#include <bits/stdc++.h>
 
using namespace std;
 
long long n, v, y, m, ans, cur, q, t[5000000], x, f[500000];
string ch, ch1, s;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 	cin >> n >> ch;
 	for(int i = 0;i < n;i++){
 		if(ch[i] == '4')s+="322";
 		else if(ch[i] == '6')s+="53";
 		else if(ch[i] == '8')s+="7222";
 		else if(ch[i] == '9')s+="7332";
 		else if(ch[i] != '1' && ch[i] != '0')s+=ch[i];
 	}
 	sort(s.begin(), s.end());
 	reverse(s.begin(), s.end());
 	cout << s << endl;
}

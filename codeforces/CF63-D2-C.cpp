#include <bits/stdc++.h>
 
using namespace std;
 
long long n;
string ch[50], cur, s;
pair <int, int> t[50];
set <string> ans;


string add0(string ch1){
	reverse(ch1.begin(), ch1.end());
	ch1+='0';
	reverse(ch1.begin(), ch1.end());
	return ch1;
}

bool check(string a, int x, int y){
	int g[100], f[100];
	for(int j = 0;j < 100;j++){
		f[j] = 0;g[j] = 0;
	}
	int xx = 0, yy = 0;
	for(int j = 0;j < 4;j++){
		f[a[j]]++;
		g[cur[j]]++;
		if(a[j] == cur[j]) xx++;
	}
	for(char c = 48;c <= 57;c++){
		if(f[c] == g[c] && g[c] != 0)yy++;
	}
	//cout << xx << ' ' << yy << ' ';
	if(xx == x && yy-xx == y)return 1;
	else return 0;
}

int main (){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> ch[i] >> t[i].first >> t[i].second;
		if(ch[i].size() == 3)ch[i] = add0(ch[i]);
		//cout << ch[i] << endl;
	}
	s = "0123456789";
	do{
		bool b = 1;
		cur+=s[0];
		cur+=s[1];
		cur+=s[2];
		cur+=s[3];
		for(int i = 0;i < n;i++){
			if(check(ch[i], t[i].first, t[i].second) == 0){b = 0;break;}
			//cout << b << ' ';
		}
		if(b)ans.insert(cur);
		cur = "";
	}while(next_permutation(s.begin(), s.end()));
	if(ans.size() > 1)cout << "Need more data" << endl;
	else if(ans.size() == 1)cout << *ans.begin() << endl;
	else cout << "Incorrect data" << endl;
}

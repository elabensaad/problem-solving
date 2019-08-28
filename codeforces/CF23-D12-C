#include <bits/stdc++.h>
 
using namespace std;
 
long long n, ans, res, a, c, x, q, cur;
pair <pair<int, int>, int> t[200000];
 
int main(){
    cin >> q;
    while(q--){
        cin >> n;
        for(int i = 0;i < (2*n)-1;i++){
            cin >> t[i].first.first >> t[i].first.second;
            t[i].second=i+1;
        }
        sort(t, t+((2*n)-1));
        cout << "YES" << endl;
        for(int i = 0;i < 2*n-2;i+=2){
            if(t[i].first.second > t[i+1].first.second)cout << t[i].second << ' ';
            else cout << t[i+1].second << ' ';
        }
        cout << t[2*n-2].second << ' ';
    }
}

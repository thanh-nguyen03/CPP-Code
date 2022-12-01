#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k,ans = 0;
string s = "";
ll check() {
	ll cnt = 0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='1') cnt++;
		else cnt = 0;
		if(cnt>=k) return 1;
	}
	return 0;
}

void sinh() {
	for(int i=s.size()-1;i>=0;i--) {
		if(s[i]=='1') s[i]='0';
		else {
			s[i]='1';
			if(check()) {
//				cout << s << endl;
				ans++;
			}
			return; 
		}
	}
}

void solve() {
	for(int i=0;i<n;i++) s+='0';
	if(check()) ans++;
	while(s[0]!='1') {
		sinh();
	}
	while(s[0]!='0') {
		sinh();
	}
	cout << ans << endl;
}

int main() {
	cout << "Nhap n | k: ";
	cin >> n >> k;
	solve();
}
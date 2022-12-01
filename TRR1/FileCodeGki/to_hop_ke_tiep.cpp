#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000
#define rs(M,x) memset(M,x,sizeof(M))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
int n, m, k;
int A[100];
void generate_next_combination(){
    int i = m - 1;
    // xet tu cuoi day ve dau day xem dk cua a[i]
    while (A[i] == (n-m+i + 1))
    {
        i = i - 1;
    }
    // neu a[i] != n-m+i +1 
    A[i] = A[i] + 1;

    // Xet cac phan tu phia sau 
    for(int j=i+1; j < m ; j++){
        A[j] = A[i] + j - i ;
    }
}

void solve(){
    cin >> n >> m >> k;
    F(i, 0, m) cin >> A[i];
    while(k--){
        generate_next_combination();
        F(i, 0, m) cout << A[i] << " ";
        cout << endl;
    }
}

int main() {
    faster();
    solve();
    return 0;
}
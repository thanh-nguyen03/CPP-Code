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
int n, weight, sum=0, res=0;
int res1[100];
int check[100];
vector<int> v_weight;
vector<int> v_value;

void Input(){
    cin >> n >> weight;
    v_weight.resize(n);
    v_value.resize(n);
    F(i, 0, n) cin >> v_weight[i];
    F(i, 0, n) cin >> v_value[i];
}

void Output(){
    cout << endl;
    F(i, 0, n) cout << res1[i] << " ";
    cout << endl << res;    
}

void Try(int i){
    F(j, 0, 2){
        check[i] = j;
        if(check[i]==1){
            sum += v_value[i];
            weight -= v_weight[i];
        }

        if(i==n-1){
            if(res < sum && weight >= 0){
                res = sum;
                F(k, 0, n) res1[k] = check[k];
            }
            F(p, 0, n) cout << check[p] << " ";
            cout << ": ";
            if(weight >= 0) cout << res << endl;
            else cout << "_" << endl;
        }
        else Try(i+1);

        if(check[i]==1){
            sum -= v_value[i];
            weight += v_weight[i];
        }
    }
}

void solve(){
    Input();
    Try(0);
    Output();
}

int main() {
    faster();
    solve();
    return 0;
}

// 4 10
// 4 2 7 1
// 5 1 8 1
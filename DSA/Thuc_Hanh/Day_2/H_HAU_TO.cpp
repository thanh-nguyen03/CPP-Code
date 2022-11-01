#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

int Ope(string s){
    if(s.size()>1) return 0;
    char x = s[0]; 
    if(x=='+' || x=='-' || x=='*' || x=='/' ) return 1;
    return 0;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        stack<ll> st;
        while(n--){
            string s;cin >> s;
            if(!Ope(s)){
                ll x = stoll(s);
                st.push(x);
            }else{
                ll b = st.top(); st.pop();
                ll a = st.top(); st.pop();
                char x = s[0];
                if(x=='+') st.push(a+b);
                else if(x=='-') st.push(a-b);
                else if(x=='*') st.push(a*b);
                else if(x=='/') st.push(a/b);
            }
        }
        cout << st.top() << endl;
 
    }
}
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

int a[100][100]; // ma trận chi phí
int n;// số lượng thành phố
bool check[100]={false};// mảng đánh dấu
int kq[100], bestConfig[100]={0};// mảng tạm và mảng cấu hình tốt nhất
int res = INT_MAX, tmp = 0;// giá trị thấp nhất qua các đỉnh và giá trị tạm
int start;// đỉnh bắt đầu

void Input(){
    cin >> n >> start;
    F(i, 0, n) F(j, 0, n) cin >> a[i][j];
}

void Output(){// xuất giá trị
    F(i, 0, n){
        cout << bestConfig[i]+1 << " ";
    }
    cout << bestConfig[0]+1 << endl;
    cout << "Chi phi thap nhat: " << res << endl;
}

void Try(int i){
    //nếu i == n thì ktr có là cấu hình tốt hơn thì lưu lại
    if(i==n){
        if(tmp + a[kq[i-1]][kq[0]] < res){
            res = tmp + a[kq[i-1]][kq[0]];
            F(j, 0, n) bestConfig[j] = kq[j];
        }
    }
    else {
        F(j, 0, n){ // duyệt các đỉnh có thể đi qua
            // nếu chưa đi qua và giá trị thỏa mãn
            if(check[j] == false && tmp + a[kq[i-1]][j] < res){
                //ghi nhớ kết quả
                kq[i] = j;
                check[j] = true;
                tmp += a[kq[i-1]][j];
                //đệ quy đến bước tiếp theo
                Try(i+1);
                //xóa bỏ ghi nhớ
                check[j] = false;
                tmp -= a[kq[i-1]][j];
            }
        }
    }
}

void solve(){
    Input();
    start--;
    kq[0] = start;
    check[start] = true;
    Try(1);// gọi từ đỉnh đầu tiên đến n thì dừng
    Output();
}

int main() {
    faster();
    solve();
    return 0;
}


// 0 1 5 6 7
// 6 0 1 8 5
// 8 6 0 1 9
// 5 7 4 0 1
// 1 6 8 5 0

// {
//     // Use IntelliSense to learn about possible attributes.
//     // Hover to view descriptions of existing attributes.
//     // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
//     "version": "0.2.0",
//     "configurations": [
//         {
//             "name": "g++.exe build and debug active file",
//             "type": "cppdbg",
//             "request": "launch",
//             "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
//             "args": [],
//             "stopAtEntry": false,
//             "cwd": "${workspaceFolder}",
//             "environment": [],
//             "externalConsole": true,
//             "MIMode": "gdb",
//             "miDebuggerPath": "C:\\mingw64\\bin\\gdb.exe",
//             "setupCommands": [
//                 {
//                     "description": "Enable pretty-printing for gdp",
//                     "text": "-enable-pretty-printing",
//                     "ignoreFailures": true
//                 }
//             ],
//             "preLaunchTask": "g++.exe build and debug active file"
//         }
//     ]
// }
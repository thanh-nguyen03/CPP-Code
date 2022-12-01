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

/*
    -: phủ định
    ^: phép hội(giao)
    v: phép tuyển(hợp) (chữ v)
    +: phép tuyển loại
    >: kéo theo
    #: tương đương
*/
string description = "-: phủ định\n^: phép hội(giao)\nv: phép tuyển(hợp) (chữ v)\n+: phép tuyển loại\n>: kéo theo\n#: tương đương\n\nMọi người nhập đúng dạng(chỉ gồm 3 chữ cái p, q, r), không có dấu cách, giữa các phép tính PHẢI có dấu ngoặc ()\nVí dụ -p phải viết là (-p); p^q phải viết là (p^q)\n";
string oper = "-^v+>!#";
string menhDe;
int numberOfParameter, soLuongMenhde;
vector<string> menhDeVec;
// (p^q)
char calc(int a, int b, char c) {
    if (c == '^') return (char((a&b) + '0'));
    if (c == 'v') return (char((a|b) + '0'));
    if (c == '+') return (char((a^b) + '0'));
    if (c == '>') {
        if (a == 1 && b == 0) return '0';
        else return '1';
    }
    if (c == '#') {
        if (a == b) return ('1');
        else return '0';
    }
    return 'a';
}

void solveForTwo() {
    stack<char> st;
    cout << "p q  ";
    for (int i = 0; i < menhDeVec.size(); i++) {
        cout << menhDeVec[i] << "  ";
    }
    cout << endl;
    int index = 0;
    vector<vi> ans(menhDeVec.size());
    while (index < menhDeVec.size()) {
        for (int i = 0; i <= 1; i++) {
            for (int j = 0; j <= 1; j++) {
                for (auto k:menhDeVec[index]) {
                    if (k == ')') {
                        string si;
                        while (st.top() != '(') {
                            si.pb(st.top());
                            st.pop();
                        }
                        st.pop();
                        reverse(all(si));
                        // cout << si << endl;
                        if (si.size() == 2) {
                            if (si[1] == 'p') {
                                if (i == 1) st.push('0');
                                else st.push('1');
                            }
                            else if (si[1] == 'q') {
                                if (j == 1) st.push('0');
                                else st.push('1');
                            }
                            else {
                                if (si[1] == '1') st.push('0');
                                else st.push('1');
                            }
                        } 
                        else if (si.size() == 3) {
                            if (si[0] == '1' || si[0] == '0') {
                                    if (si[2] == 'p') st.push(calc(si[0] - '0', i, si[1]));
                                    else if (si[2] == 'q') st.push(calc(si[0] - '0', j, si[1]));
                                    else st.push(calc(si[0] - '0', si[2] - '0', si[1]));

                                }
                                else if (si[2] == '1' || si[2] == '0') {
                                    if (si[0] == 'p') st.push(calc(i, si[2] - '0', si[1]));
                                    else if (si[0] == 'q') st.push(calc(j, si[2] - '0', si[1]));
                                    else st.push(calc(si[0] - '0', si[2] - '0', si[1]));
                                }
                                else {
                                    if (si[0] == 'p' && si[2] == 'q') st.push(calc(i, j, si[1]));
                                    if (si[0] == 'q' && si[2] == 'p') st.push(calc(j, i, si[1]));
                                }
                        }
                    }
                    else st.push(k);
                }
                // cout << i << " " << j << "  " << st.top() << endl;
                ans[index].pb(st.top() - '0');
                st.pop();
            }
        }
        index++;
    }
    int idx = 0;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << i << " " << j << setw(2 + menhDeVec[0].size() / 2 + 1);
            for (int k = 0; k < ans.size(); k++) {
                cout << ans[k][idx] << setw(( k != ans.size() - 1 ? 2 + menhDeVec[k + 1].size() / 2 + menhDeVec[k].size() / 2 + 1 : 0));
            }
            idx++;
            cout << endl;
        }
    }
}

void solveForThree() {
    stack<char> st;
    cout << "p q r  ";
    for (int i = 0; i < menhDeVec.size(); i++) {
        cout << menhDeVec[i] << "  ";
    }
    cout << endl;
    int index = 0;
    vector<vi> ans(menhDeVec.size());
    while (index < menhDeVec.size()) {
        for (int i = 0; i <= 1; i++) {
            for (int j = 0; j <= 1; j++) {
                for (int r = 0; r <= 1; r++) {
                    for (auto k:menhDeVec[index]) {
                        if (k == ')') {
                            string si;
                            while (st.top() != '(') {
                                si.pb(st.top());
                                st.pop();
                            }
                            st.pop();
                            reverse(all(si));
                            // cout << si << endl;
                            if (si.size() == 2) {
                                if (si[1] == 'p') {
                                    if (i == 1) st.push('0');
                                    else st.push('1');
                                }
                                else if (si[1] == 'q') {
                                    if (j == 1) st.push('0');
                                    else st.push('1');
                                }
                                else if (si[1] == 'r') {
                                    if (r == 1) st.push('0');
                                    else st.push('1');
                                }
                                else {
                                    if (si[1] == '1') st.push('0');
                                    else st.push('1');
                                }
                            } 
                            else if (si.size() == 3) {
                                if (si[0] == '1' || si[0] == '0') {
                                    if (si[2] == 'p') st.push(calc(si[0] - '0', i, si[1]));
                                    else if (si[2] == 'q') st.push(calc(si[0] - '0', j, si[1]));
                                    else if (si[2] == 'r') st.push(calc(si[0] - '0', r, si[1]));
                                    else st.push(calc(si[0] - '0', si[2] - '0', si[1]));

                                }
                                else if (si[2] == '1' || si[2] == '0') {
                                    if (si[0] == 'p') st.push(calc(i, si[2] - '0', si[1]));
                                    else if (si[0] == 'q') st.push(calc(j, si[2] - '0', si[1]));
                                    else if (si[0] == 'r') st.push(calc(r, si[2] - '0', si[1]));
                                    else st.push(calc(si[0] - '0', si[2] - '0', si[1]));
                                }
                                else {
                                    if (si[0] == 'p' && si[2] == 'q') st.push(calc(i, j, si[1]));
                                    if (si[0] == 'q' && si[2] == 'r') st.push(calc(j, r, si[1]));
                                    if (si[0] == 'p' && si[2] == 'r') st.push(calc(i, r, si[1]));
                                    if (si[0] == 'q' && si[2] == 'p') st.push(calc(j, i, si[1]));
                                    if (si[0] == 'r' && si[2] == 'q') st.push(calc(r, j, si[1]));
                                    if (si[0] == 'r' && si[2] == 'p') st.push(calc(r, i, si[1]));
                                }
                            }
                        }
                        else st.push(k);
                    }
                    // cout << i << " " << j << " " << r << "  " << st.top() << endl;
                    ans[index].pb(st.top() - '0');
                    st.pop();
                }
            }
        }
        index++;
    }
    int idx = 0;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int r = 0; r <= 1; r++) {
                cout << i << " " << j << " " << r << setw(2 + menhDeVec[0].size() / 2 + 1);
                for (int k = 0; k < ans.size(); k++) {
                    cout << ans[k][idx] << setw(( k != ans.size() - 1 ? 2 + menhDeVec[k + 1].size() / 2 + menhDeVec[k].size() / 2 + 1 : 0));
                }
                idx++;
                cout << endl;

            }
        }
    }
}

int checkValidString(string s) {
    int cntOper = 0, cntPa = 0;
    for (auto i:s) {
        if (i == '(') cntPa++;
        else if (find(all(oper), i) != oper.end()) cntOper++;
    }
    return cntOper == cntPa;
}

void solve() {
    int index = 1;
    int check = 1;
    vi invalidArr;
    while (soLuongMenhde--) {
        cout << "Nhập mệnh đề " << index++ << ": ";
        getline(cin, menhDe);
        if (!checkValidString(menhDe)) {
            check = 0;
            invalidArr.pb(index - 1);
        }
        menhDeVec.pb(menhDe);
    }

    if (!check) {
        cout << "Các mệnh đề số ";
        for (auto i:invalidArr) cout << i << " ";
        cout << "thiếu hoặc thừa ngoặc!\n\n";
        return;
    }

    if (numberOfParameter == 2) solveForTwo();
    if (numberOfParameter == 3) solveForThree();
}

int main() {
    cout << description << endl;
    cout << "Nhập số biến của mệnh đề: ";
    cin >> numberOfParameter;
    cout << "Nhập số lượng mệnh đề: ";
    cin >> soLuongMenhde;
    cin.ignore();
    solve();
}
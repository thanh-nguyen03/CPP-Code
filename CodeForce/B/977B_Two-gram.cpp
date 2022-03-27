#include <iostream>
#include <math.h>
#include <map>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++) {
        string key;
        key.push_back(s[i]);
        key.push_back(s[i + 1]);
        mp[key]++;
    }
    int max = 0;
    string maxKey;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (max < itr->second) {
            max = itr->second;
            maxKey = itr->first;
        }
    }
    cout << maxKey;
}
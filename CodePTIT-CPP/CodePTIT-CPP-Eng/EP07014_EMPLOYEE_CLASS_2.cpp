#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

class Employee {
    public:
    string id = "NV01 ", name, pos;
    int base, total, count, sp, totalBonus, monthly;
    int bonus;

    void getBonus() {
        if (count >= 25) bonus = monthly * 20 / 100;
        else if (count >= 22 && count < 25) bonus = monthly * 10 / 100;
        else bonus = 0;
    }

    void getMonthly() {
        monthly = base * count;
    }

    void getTotalBonus() {
        totalBonus = monthly * bonus - monthly;
    }

    void getSupport() {
        if (pos == "GD") sp = 250000;
        else if (pos == "PGD") sp = 200000;
        else if (pos == "TP") sp = 180000;
        else if (pos == "NV") sp = 150000;
    }

    void getTotal() {
        total = monthly + bonus + sp;
    }
};

void input(Employee &a) {
    getline(cin, a.name);
    cin >> a.base >> a.count >> a.pos;
    a.getMonthly();
    a.getBonus();
    a.getSupport();
    a.getTotalBonus();
    a.getTotal();
}

void output(Employee a) {
    cout << a.id << a.name << " " << a.monthly << " " << a.bonus << " " << a.sp << " " << a.total;
}

int main() {
    Employee a;
    input(a);
    output(a);
}


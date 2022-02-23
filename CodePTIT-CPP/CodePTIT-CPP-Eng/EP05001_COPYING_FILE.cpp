#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));



int main() {
    fastread();
	ifstream input;
	ofstream output;
	input.open("PTIT.in");
	output.open("PTIT.out");
	string line;
	while (!input.eof()) {
		getline(input, line);
		output << line << endl;
	}
	input.close();
	output.close();
}


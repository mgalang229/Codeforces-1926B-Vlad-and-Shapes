#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n;
	cin >> n;
	char grid[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	vector<vector<int>> vec;
	vector<int> indices;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == '1') {
				indices.push_back(i);
			}
		}
		if (indices.size() > 0) {
			vec.push_back(indices);
			indices.clear();
		}
	}
	bool equal = true;
	for (vector<int>& ind : vec) {
		equal &= (ind.size() == vec.size());
		// cout << ind.size() << " " << vec.size() << "\n";
	}
	cout << (equal ? "SQUARE" : "TRIANGLE") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}

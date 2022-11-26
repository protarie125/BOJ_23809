#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto cs = vector<string>{
		"@   @",
		"@  @",
		"@@@",
		"@  @",
		"@   @"
	};
	auto ls = vector<int>{
		5,
		4,
		3,
		4,
		5
	};

	auto output = vector<vector<char>>(5 * n, vector<char>(5 * n));

	for (auto i = 0; i < 5; ++i) {
		for (auto j = 0; j < ls[i]; ++j) {
			for (auto ii = 0; ii < n; ++ii) {
				for (auto jj = 0; jj < n; ++jj) {
					output[i * n + ii][j * n + jj] = cs[i][j];
				}
			}
		}
	}

	for (auto i = 0; i < 5 * n; ++i) {
		for (auto j = 0; j < ls[i / n] * n; ++j) {
			cout << output[i][j];
		}

		cout << '\n';
	}

	return 0;
}
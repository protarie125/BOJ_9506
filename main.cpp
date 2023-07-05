#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	do {
		cin >> n;
		if (-1 == n) {
			break;
		}

		auto ans = vi{};
		ans.reserve(n);
		auto sum = int{ 0 };
		for (auto i = 1; i < n; ++i) {
			if (0 == n % i) {
				sum += i;
				ans.push_back(i);
			}
		}

		if (sum == n) {
			sort(ans.begin(), ans.end());

			cout << n << " = ";
			for (auto i = 0; i < ans.size() - 1; ++i) {
				cout << ans[i] << " + ";
			}
			cout << ans.back() << '\n';
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
	} while (true);

	return 0;
}
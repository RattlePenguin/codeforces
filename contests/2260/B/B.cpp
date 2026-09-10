#include <bits/stdc++.h>

#define DEBUG
#define all(x) (x).begin(), (x).end()

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using pll = pair<ll, ll>;

const ll INF{1000000000000000};
const ll MAX{INF};
const ll MIN{-INF};
const ll MOD{1000000007};

ll solve() {
	ll x, y, z;
	cin >> x >> y >> z;
	
	// for 1..k, y + i mod x + i
	// sum from 1..k; y + i % x + i
}

int main() {
	cin.tie(nullptr);
	cin.sync_with_stdio(false);

	ll t;
	cin >> t;

	for (ll i = 0 ; i < t; ++i) {
		cout << solve() << '\n';
	}
}

#include <bits/stdc++.h>

// #define DEBUG
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
	ll n;
	cin >> n;
	
	vll freq(2, 0);
	ll start, end;
	for (ll i = 1; i <= n; ++i) {
		ll c;
		cin >> c;
		if (i == 1) {
			start = c;
		}
		if (i == n) {
			end = c;
		} 
		++freq[c];
	}
	
	if (start == 0 && end == 0) return 0;
	if (freq[0] < 2) return -1;
	--freq[start]; --freq[end];
	
	ll swaps {};
	if (start == 1) ++swaps;
	if (end == 1) ++swaps;
	if (swaps > freq[0]) return -1;
	return swaps;
}

int main() {
	cin.tie(nullptr);
	cin.sync_with_stdio(false);

	ll t;
	cin >> t;
	
	for (ll i = 1; i <= t; ++i) {
		cout << solve() << '\n';
	}
}

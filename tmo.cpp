#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define all(x) x.begin(), x.end()

using namespace std;

void open(string s)
{
	if(fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main() 
{
	open("");
	ll n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> a(n);
	for (int i = 0; i < n; i++) 
	{
		ll s, e;
		cin >> s >> e;
		a[i] = {s + e, e};
	}
	sort(a.rbegin(), a.rend());
	vector<ll> b;
	ll d = 0;
	int p = 0;
	while (m > 0) 
	{
		ll g = -1;
		if (p < n) {
			g = a[p].first;
		}
		ll h = -1;
		if (!b.empty()) 
		{
			h = b[0];
		}
		if (g == -1 && h == -1) 
		{
			break;
		}
		if (g > h) 
		{
			d += g;
			m--;
			ll e = a[p].second;
			auto k = lower_bound(b.begin(), b.end(), e, greater<ll>());
			b.insert(k, e);
			p++;
		} 
		else 
		{
			d += m * h;
			m = 0;
		}
	}

	cout << d << "\n";
	return 0;
}
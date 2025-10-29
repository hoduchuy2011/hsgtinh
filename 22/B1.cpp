#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define INF 1e9
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
	open("B1");
	ll x;
	cin>>x;
	vector<pair<ll, ll>> a;
	for(ll i = 2; i*i <= x; ++i)
	{
		if(x % i == 0)
		{
			ll tmp = 0;
			while(x % i == 0)
			{
				x /= i;
				tmp++;
			}
			a.push_back(make_pair(i, tmp));
		}
	}
	if(x != 1)
	{
		a.push_back(make_pair(x, 1));
	}
	ll res = 1;
	for(auto i : a)
	{
		if(i.se % 2 != 0)
		{
			res *= i.fi;
		}
	}
	cout<<res;
	
	cerr << "Time elapsed: " << 1.000 * clock() / CLOCKS_PER_SEC << ".s\n";
	return 0;
}

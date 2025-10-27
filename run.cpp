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

int main() 
{
	open("");
	int n;
	ll r;
	cin >> n >> r;
	vector<ll> d(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> d[i];
	}
	sort(all(d));
	ll cnt = 0;
	int j = 0;
	for (int i = 0; i < n; ++i) 
	{
		while (j < n && d[j] - d[i] <= r)
		{
			++j;
		}
		cnt += (n - j);
	}
	cout << cnt;
	
	return 0;
}

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
	ll a, b;
	bool f = 0;
	cin>>a>>b;
	ll c = __gcd(a, b);
	for(int i = 2; i * i <= c; i++)
	{
		if(c % i == 0)
		{
			cout<<c/i;
			f = 1;
			break;
		}
	}
	if(!f)
	{
		cout<<1;
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}
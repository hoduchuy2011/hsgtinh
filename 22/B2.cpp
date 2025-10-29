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
	open("B2");
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		int c;
		cin>>n>>c;
		if(c == 0)
		{
			int pos;
			for(int i = n.size() - 1; i > 0; --i)
			{
				if(n[i] == '5')
				{
					pos = i;
					break;
				}
			}
			for(int i = 0; i <= pos; i++)
			{
				cout<<n[i];
			}
			cout<<"\n";
		}
		else
		{
			int s = 0;
			for(char i : n)
			{
				s += i - '0';
			}
			string res = "-1"; 
			for(int i = 0; i < n.size(); ++i)
			{
				int tmp = n[i] - '0';
				
				if(s % 3 == tmp % 3)
				{
					string m = n.substr(0, i) + n.substr(i + 1);
					
					if (m.empty()) {
						m = "0"; 
					}
					
					int v = 0;
					while (m.size() > 1 && v < m.size() && m[v] == '0') {
						v++;
					}
					m = m.substr(v);
					
					if(res == "-1" || m.size() > res.size() || 
					   (m.size() == res.size() && m > res))
					{
						res = m;
					}
				}
			}
			cout<<res<<"\n";
		}
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}
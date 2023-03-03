#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w", stdout);
	#endif
		
		int n, pass = 0, maxi = 0;
		cin>>n;

		for(int i = 0; i < n; i++)
		{
			int a, b;
			cin>>a>>b;

			pass -= a;
			pass += b;

			maxi = max(maxi, pass);
		}

		cout<<maxi<<"\n";
		
	return 0;
}

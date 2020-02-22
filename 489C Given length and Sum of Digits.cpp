
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;


	ll calculate_min(ll nd, ll sumd)
	{
		ll sum=1, kd = 1, larr = 0;
			ll arr[nd] = {0};
			arr[0] = 1;
			ll sumr;
			sumr = sumd - sum;
		while(true)
			{
				if((nd-kd)*9>=sumr)
				{
					larr++;
					kd++;
				}
				else{
					if(nd-kd == 0){
						arr[larr] = sumr;
						break; 
					}
					arr[larr] ++;
					sum++;
					sumr = sumd - sum;
				}
			}
			// cout<<endl;
			for(ll i = 0; i< nd ;i++) cout<<arr[i];
			cout<<" ";
	}


	ll calculate_max(ll nd, ll sumd)
	{


		ll sum=9, kd = 1, larr = 0;
			ll arr[nd] = {0};
			arr[0] = 9;
			ll sumr;
			sumr = sumd - sum;
		while(true)
			{
				arr[larr] = 9;
				sumr = sumd - sum;

				if(sumr < 0)
				{
					arr[larr] += sumr;
					break;
				}
				else
				{
					larr ++;
					sum = sum + 9;
				}
			}
			// cout<<endl;
			for(ll i = 0; i< nd ;i++) cout<<arr[i];
			cout<<"\n";
	}



	int main()
	{
		std::ios::sync_with_stdio(false);
		 int T=1;

		 // cin>>T;

           		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			// bool possible = true;
			ll nd,sumd; cin>>nd>>sumd;
			ll sum=1, kd = 1, larr = 0;
			ll arr[nd] = {0};
			arr[0] = 1;
			ll sumr;
			sumr = sumd - sum;

			if(sumd == 0 && nd == 1){
				cout<<0<<" "<<0<<endl;
				return 0;
			}

			if(sumd > nd*9 || sumd==0){
				cout << -1 << " "<< -1<< endl;
				return 0;
				// continue;
			}

			if(sumd == 1)
			{
				for(ll i=0;i<nd;i++)
					cout<<arr[i];
				cout<<" ";
				for(ll i=0;i<nd;i++)
					cout<<arr[i];
				cout<<endl;
				return 0;
				// continue;
			}


			if(nd == 1)
			{
				cout<<sumd<<" "<<sumd<<endl;
				return 0;
				// continue;
			}

           calculate_min(nd, sumd);
           calculate_max(nd, sumd);
		}
		return 0;
	}

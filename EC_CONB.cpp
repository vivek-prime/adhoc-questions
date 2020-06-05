#include <bits/stdc++.h>
using namespace std;
# define ll long long
ll reverse_even(ll n);
ll pow_of_two(int index);

ll reverse_even(ll n)
{
	vector<int> v;
	ll rev = 0;
	while(n!=0)
	{
		v.push_back(n%2);
		n/=2;
	}
	for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<"\n";
	int len_ar = v.size()-1;
	for(int i= len_ar; i>=0;i--)
	{
		rev += v[i]*pow_of_two(len_ar-i);
	}
	return rev;
}

ll pow_of_two(int index)
{
	ll res = 1;
	for(int i=0;i<index;i++)
	{
		res *=2;
	}
	return res;
}
int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			n = reverse_even(n);
			cout<<"vivek : "<<n<<"\n";
		}
		cout<<n<<"\n";
	}
	return 0;
}

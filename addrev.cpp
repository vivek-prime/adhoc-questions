#include <iostream>
using namespace std;
# define ll long long
ll reverse(ll n);
ll reverse(ll n)
{
	ll rev =0, rem=0;
	while(n!=0)
	{
		rem = n%10;
		rev = rev *10 + rem;
		n/=10;
	}
	return rev;
}
int main()
{
	int t;
	ll a,b,sum;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		a = reverse(a);
		b = reverse(b);
		sum = reverse(a+b);
		cout<<sum<<"\n";
	}
	return 0;
}

#include <iostream>
using namespace std;

int rev(int num)
{	int ans=0;
	while(num)
	{
		int rem=num%10;
		
		ans=ans*10 + rem;
		num/=10;
	}
	return ans;
}

int replace(int num)
{
	int rem,N=0;
	while(num)
	{
		rem=num%10;
		if(rem==0)
		{
			rem=5;
		}

		N=N*10+rem;
		num/=10;
	}
	return N;
}

int main()
{
	int num;
	cin>>num;

	int Rev = rev(num);
	cout<<Rev<<endl;
	int ans = replace(Rev);
	cout<<ans;
}
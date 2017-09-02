#include <iostream>
using namespace std;

void odd_even(int num)
{
	
	int evens = 0, oddsum = 0;
	
	while (num)
	{
		int rem = num % 10;
		if(rem%2!=0)
		{
			oddsum+=rem;
		}
		else
			if(rem%2==0)
			{
				evens+=rem;
			}
			num/=10;
	}
	if(oddsum%3==0||evens%4==0)
	{
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;

}	
int main()
{

	int n;
	cin>>n;
	int arr[100];

	for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}	
	for (int i = 0; i < n; ++i)
		{
			odd_even(arr[i]);
		}	

}
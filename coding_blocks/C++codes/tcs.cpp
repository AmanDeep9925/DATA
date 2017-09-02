#include <iostream>
using namespace std;

int memo[1000];
const inf 100000;
int bookfair(int arr[],int be,int n)
{
	if(be>n)
	{
		return 0;
	}
	int best = inf;
	for(int i=0;i<n;++i)
	{	int cursatll=arr[i]
		int curans=arr[be]+bookfair(arr,be+2,n);
		best = max(aur+be)
	}
}

int main()
{
	int arr[100];
	int n;
	cin>>n;
	int skip=2;

	int ans = bookfair(arr,0,n);
}
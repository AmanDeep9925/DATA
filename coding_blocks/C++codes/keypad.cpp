#include <iostream>
using namespace std;

void index(int arr[],int be,int en ,int num)
{
	if(be>en)
	{
		return ;
	}

	if(arr[be]==num)
	{
		cout<<be<<" ";
	}
	index(arr,be+1,en,num);
}

int main()
{
	int n, arr[10];
	cin >> n;
	int ele;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	

	cin >> ele;
	int be=0,en=n;
	index(arr,be,en,ele);
	
	
}
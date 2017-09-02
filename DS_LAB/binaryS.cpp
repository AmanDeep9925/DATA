#include <iostream>
using namespace std;

void input(int A[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
}

void output(int A[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cout << A[i] << " ";
	}
}
int binary(int A[],int sze,int ele)
{
	int be = 0;
	int end = sze-1;
	int mid;

	while(be<=end)
	{
		mid = (be+end)/2;
		if(A[mid]==ele)
		{
			return mid;
		}
		else if(A[mid]<ele)
		{
			be = mid+1;
		}
		else {
			end = mid-1;
		}
	}
	return -1;
}

int main()
{
	int size, A[100];
	cout << "\n enter the size of the array :";
	cin >> size;
	cout << "\n enter the elements of the array :";
	input(A, size);

	cout << "\n ARRAY IS AS FOLLOW :";
	output(A, size);
	int ele;
	cout<<"\n enter the element to be searched :";
	cin>>ele;

	int pos = binary(A,size,ele);

	cout<<"\n element "<<ele<<" found at position "<<pos+1;
}
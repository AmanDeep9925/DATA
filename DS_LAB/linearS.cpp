// TO SEARCH THE ELEMENT IN THE ARRAY
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

int linear(int A[],int size,int ele)
{	bool flag = false;
	int pos;
	for (int i = 0; i < size; ++i)
	{
		if(A[i]==ele)
		{
			flag = true;
			pos = i;
			break;
		}
	}
	return pos;
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

	int pos = linear(A,size,ele);

	cout<<"\n element "<<ele<<"found at position "<<pos+1;
}
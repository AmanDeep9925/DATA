// PROGRAM TO FIND THE smallest ELEMENT OF THE ARRAY
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

int smallest(int A[], int Sze)
{
	int small = A[0];
	for (int i = 1; i < Sze; ++i)
	{
		if (A[i] < small)
		{
			// time to update the smallest
			small = A[i];
		}
	}
	return small;
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
	int ans = smallest(A, size);
	cout << "\n smallest element of the array is :" << ans;
}
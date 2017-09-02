#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n - i; ++j){
			if(j + 1 < n && arr[j] > arr[j + 1]){
				//swap
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void triplets(int A[],int arrsze,int sum)
{
	for(int i=0;i<arrsze-2;++i)
	{
		for(int j=i+1;j<arrsze-1;++j)
		{
			for(int k = j +1;k<arrsze;++k)
			{
				if(A[i]+A[j]+A[k]==sum)
				{
					cout<<A[i]<<", "<<A[j]<<" and "<<A[k]<<endl;
				}
			}
		}
	}
}

void input(int a[], int n){
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
}
int main(){
	int arr[100];
	int n;
	cin >> n;

	input(arr, n);

	int sum;
	cin >> sum;
	bubbleSort(arr,n);
	triplets(arr,n,sum);

}
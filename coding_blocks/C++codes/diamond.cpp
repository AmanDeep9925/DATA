#include <iostream>
#include <cmath>
using namespace std;

void binTOdec(int binnum)
{
	
	int decnum =0,rem,j=0;
    while(binnum)
    {
        rem=binnum%10;
        binnum/=10;
        decnum+=rem*pow(2,j);
        ++j;
    }
    cout<<decnum<<endl;
   }  
int main()
{
	int N;
	cin>>N;
	int Arr[100];
	for (int i = 0; i < N; ++i)
	{
		cin>>Arr[i];
	}

	for (int i = 0; i < N; ++i)
	{
		binTOdec(Arr[i]);
	}
	
}
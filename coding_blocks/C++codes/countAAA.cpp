#include <iostream>
#include <cstring>
using namespace std;
int countAAA(char str[],int be,int end)
{	
	static int countA=0,countover=0;
	if(be>end)
	{
		return 0;
	}
	else
		if(str[be]=='a'&&str[be+1]=='a'&&str[be+2]=='a')
		{
			countAAA(str,be+1,be+2);
			++countA;
		}
		if(str[be]=='a'&&str[be+1]=='a'&&str[be+2]=='a') 
		return countA;
}
int main()
{
	char str[100];
	cin>>str;
	int be=0,end=strlen(str);
	int ans = countAAA(str,be,end);
	cout<<ans;

}
#include <iostream>
#include <cstring>
using namespace std;

bool isbalanced(char str[],int be ,int end)
{	 int count = 0,count1=0,count2=0;
	if(be>=end)
	{
		return false;
	}
	if(str[be]=='{') count++; 
	if(str[be]=='[') count1++;
	if(str[be]=='(')  count2++;
	
	
	if(str[be]=='}') count--;
	if(str[be]==']') count1--;
	if(str[be]==')')  count2--;
	
	isbalanced(str,be+1,end);
	if(count2==0&&count1==0&&count==0)
	{
	    return true;
	}
}
int main()
{
	char str[100];
	cin>>str;
	int end=strlen(str),be=0;
	bool ans = isbalanced(str,be,end);
	cout<<boolalpha<<ans;

}
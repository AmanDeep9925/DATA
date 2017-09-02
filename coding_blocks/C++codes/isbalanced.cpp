#include <iostream>
#include <cstring>
using namespace std;
bool isbalanced(string str,int be ,int end)
{	static int count = 0;
	if(be>=end)
	{
		return false;
	}
	if(str[be]=='{'||str[be]=='('||str[be]=='[')
	{
		count++;
	}
	if(str[be]=='}'||str[be]==')'||str[be]==']')
	{
		count--;
	}
	isbalanced(str,be+1,end);
	if(count==0)
	{
		return true;
	}
}
int main()
{
	string str;
	cin>>str;
	int end=str.size(),be=0;
	bool ans = isbalanced(str,be,end);
	cout<<boolalpha<<ans;

}
#include <iostream>
using namespace std;
int mycnt = 0;

int cnt(char str[],int be){

	if(str[be] == '\0')
		return 0;
      
		char ch = str[be];
		for(int j=be ; str[j] != '\0';j++){
			if(ch == str[j+2])
			{
				mycnt++;
				break;
			}
			else
			   break;
		}
	 cnt(str,be+1) ;

	return mycnt;


	
}
int main()
{
	char str[100];
	//int cnt = 0;
	cin >> str;

	cout << cnt(str,0);
}
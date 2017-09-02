#include <iostream>
using namespace std;
int main()
{
	int trows,rows,space,star;
	cin>>trows;
	for(rows=1;rows<=trows;++rows)
	{
		for(star=trows;star>=rows;--star)
		{
			cout<<"*";
		}
		for(space=1;space<2*rows-1;++space)
		{
			cout<<" ";
		}
		for(star=trows;star>=rows;--star)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(rows=trows-1;rows>=1;--rows)
	{
		for(star=trows;star>=rows;--star)
		{
			cout<<"*";
		}
		for(space=1;space<2*rows-1;++space)
		{
			cout<<" ";
		}
		for(star=trows;star>=rows;--star)
		{
			cout<<"*";
		}
	cout<<endl;	
	}

}
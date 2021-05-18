#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,position;
	cin>>num,position;
	if(num&((position-1)<<1))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}

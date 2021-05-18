#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos,result;
	cin>>num>>pos;
	result=num^((pos-1)<<1);
	cout<<result;
	return 0;
}

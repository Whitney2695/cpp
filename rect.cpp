#include<iostream>
using namespace std;
int main()
{
	int i ,j;
	for (i=1; i<=5; i++)
	{
		for (j=i; j<5; j++)
		{
		cout <<"*"<<"\t";	
		}
		cout <<"\n";
	}
	return 0;
}
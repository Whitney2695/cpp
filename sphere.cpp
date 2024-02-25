#include<iostream>
#define pie 3.142
using namespace std;
void volume(float r);
int main()
{
	float r;
	cout<<"Enter the radius"<<endl;
	cin>>r;
	volume(r);
	return 0;
}
void volume(float r)
{
	float vol;
	vol=(4*pie*r*r*r)/3;
	cout<<"the volume="<<vol;
}


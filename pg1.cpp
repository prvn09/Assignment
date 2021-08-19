#include<iostream>
using namespace std;
int main()
{
	int a[5];
	float sum=0;
	cout<<"Enter the element in array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		sum=a[i]+sum;
	}
	cout<<"sum of all elements is: "<<sum<<endl;
	float n=sizeof(a)/sizeof(a[0]);
	float avg=sum/n;
	cout<<"Avg. of sum is: "<<avg<<endl;
	return 0;
	
	
}

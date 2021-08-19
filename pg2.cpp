#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the element in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Entered Elements are: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	//swapping part
	
	int temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	
	cout<<"\nAfter swapping first and last Entered Elements : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	
}

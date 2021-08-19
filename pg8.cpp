#include<iostream>
using namespace std;


void lastarray(int a[],int x)
{
	int i,key,j;
	for(i=1;i<x;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}	
	cout<<"Merged array in ascending order : ";
	for(int i=0;i<x;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n,m;
	cout<<"Enter the size for array N"<<endl;
	cin>>n;
	int N[n];
	cout<<"Enter the element in array N in ascending order"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>N[i];
	}
	cout<<"Enter the size for array M descedinding order"<<endl;
	cin>>m;
	int M[m];
	for(int i=0;i<m;i++)
	{
		cin>>M[i];
	}
	int arr[m+n];
	for(int i=0;i<n;i++)
	{
		arr[i]=N[i];
	}
	for(int i=n,j=0;i<m+n,j<m;i++,j++)
	{
		arr[i]=M[j];
	}
	cout<<"Merged array is : ";
	for(int i=0;i<m+n;i++)
	{
		cout<<arr[i]<<" ";
	}
	int x= m+n;
	cout<<endl;
	lastarray(arr,x);
	
}

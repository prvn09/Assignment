#include<iostream>
using namespace std;
void MIX(int a1[],int a2[],int m,int n)
{
	int a[m+n],even=0;
	for(int i=0;i<m;i++)
	{
		a[i]=a1[i];
	}
	for(int i=m,j=0;i<n+m,j<n;i++,j++)
	{
		a[i]=a2[j];
	}
	cout<<endl;
	cout<<"-----------------"<<endl;
	cout<<"merged array is : "<<endl;
	for(int i=0;i<m+n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"-----------------"<<endl;
	int array[m+n];
	for(int i=0;i<m+n;i++)
	{
		if(a[i]%2==0)
		{
			even++;
			array[even-1]=a[i];		
		}	
	}
	for(int i=m+n-1;i>=0;i--)
	{
		if(a[i]%2!=0)
		{
			array[even]=a[i];
			even++;
		}
	}
	cout<<endl<<"--------------"<<endl;
	cout<<"final array is "<<endl;
	for(int i=0;i<m+n;i++)
	{
		cout<<array[i]<<" ";
	}
			
}
int main()
{
	int m,n;
	cout<<"Enter the size of first array "<<endl;
	cin>>m;
	int arr1[m];
	cout<<"Enter the values of first array"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter the size of second array"<<endl;
	cin>>n;
	int arr2[n];
	cout<<"Enter the values of second array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	MIX(arr1,arr2,m,n);
}

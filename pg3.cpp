#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements in "<<n<<" size array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Reverse of the array is :"<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	
}

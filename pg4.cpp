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
	int max=a[0];

	int min=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];		
		}
		if(a[i]<min)
		{
			min=a[i];		
		}
		
		
	}
	cout<<"Maximum element in that array is : "<<max<<endl;
	cout<<"Minimum element in that array is : "<<min<<endl;
return 0;	
}
	


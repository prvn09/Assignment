#include<iostream>
#include<curses.h>
using namespace std;

void insertionsort(int arr[], int n)
{
	int key,i,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	cout<<"Sorted elements are: ";
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
	
}
void selectionsort(int arr[], int n)
{
	int i,min,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
				
			}
		}
		if(min != i)
		{
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	cout<<"sorted array by selection sort is: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
void bubblesort(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp = arr[j];
                   		arr[j] = arr[j+1];
                 		arr[j+1] = temp;
			}
		}
		
		
	}
	cout<<"Sorted array by bubble sort is :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


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
	curscr;
	cout<<"Entered elements are :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int x;
	cout<<"choose\n 1 for Insertion sort \n 2 for selection sort \n 3 for bubble sort"<<endl;
	cin>>x;  
        switch(x)
        {
        	case 1 : insertionsort(a,n);
        	break;
        	case 2 : selectionsort(a,n);
        	break;
        	case 3 : bubblesort(a,n);
        	break;
        	default : cout<<"Wrong choice!!!!"<<endl;
        }		
		
}	
	


#include<iostream>
using namespace std;
int find(int a[],int n,int x)
{
	int flag;
 	for(int i=0;i<n;i++)
        {
        	if(a[i]==x) 
        	{
        	  flag=1;	
        	}
        	else flag=0;
        	 
        	
        }
        return flag;
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
        cout<<"Entered elements are :"<<endl;
        for(int i=0;i<n;i++)
        {
                cout<<a[i]<<" ";
        }
        cout<<endl;
        
        cout<<"Enter the number which you want to search in array"<<endl;
        int x;
        cin>>x;
        int y=find(a,n,x);
        cout<<y<<endl;

}

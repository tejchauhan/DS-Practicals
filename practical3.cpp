#include<iostream>
using namespace std;
int main()
{
	int a,b[100],i,n,l,u,j,t=0,mid,h=0;
	cout<<"enter size of array ";
	cin>>n;
	cout<<"enter the array";
	for(i=0;i<n;i++)
	{
		cin>>b[i];	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]>=b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	cout<<"array is sorted using bubble sort"<<endl;
	
	
	cout<<"enter the no. to be searched";
	cin>>a;
	
	l=0;
	u=n-1;
	for(i=0;i<n ;i++)
	{
		if(a==l)
		{
			cout<<endl<<"element found at index "<<l<<endl;
			break;
		}
		else if(a==u)
		{
			cout<<"element found at index "<<u<<endl;
			break;
		}
		else
		{
			mid=(l+u)/2;
			if(a==b[mid])
			{
				cout<<"element found at index "<<mid<<endl;
				break;
			}
			else if(a>b[mid])
			{
				l=mid+1;
			}
			else if(a<b[mid])
			{
				u=mid-1;
			}
			
		}
	}
}

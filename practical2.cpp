#include<iostream>
using namespace std;
int main()
{
	int a,b[100],i,n,g=0,h;
	cout<<"enter the no.of array elements";
	cin>>n;
	cout<<"enter the array";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<"enter the no. to be searched";
	cin>>a;
	for(i=0;i<n;i++)
	{
		if(a==b[i])
		{
			g=1;
			h=i;
			
		}
	}
	if(g==1)
	{
		cout<<endl<<"element is present at index "<<h<<endl;
	}
	else
	{
		cout<<endl<<"element is not present in the array";
	}
}

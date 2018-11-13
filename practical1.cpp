#include <iostream>
using namespace std;
int main()
{
	int a[100],n,i,r,j,q,s,g,e;
	char c;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
    cout<<"enter y to continue\n";
	cin>>c;
	while(c=='y')
	{
	cout<<"enter \n1 for insertion\n2 for deletion\n3 for searching location \n4 for displaying";
	cin>>q;
	switch(q)
	{
		case 1:	
					cout<<"enter the no. to be inserted";
					cin>>j;
					cout<<"enter the index of the number to be inserted";
					cin>>r;
					n++;
					for(i=n-1;i>r;i--)
					{
						a[i]=a[i-1];
					}
					a[i]=j;
					for(i=0;i<n;i++)
					{
						cout<<a[i]<<"\t";
					}
					cout<<endl<<endl;
					break;
					
		case 2:
			cout<<"enter \n1 for number deletion\n2 for index deletion";
			cin>>s;
			if(s==1)
			{
			
			cout<<"enter the number to be deleted";
			cin>>e;
			for(i=0;i<n;i++)
			{
				if(a[i]==e)
				{
					
					r=i;
				}
			}
			for(i=r;i<n;i++)
			{
				a[i]=a[i+1];
			}
			n--;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
			
			
		else if(s==2)
		{
				
			cout<<"enter the index of the number to be deleted";
			cin>>r;
			for(i=r;i<n;i++)
			{
				a[i]=a[i+1];
			}
			n--;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
		else
		{
			cout<<"wrong input try again";
		}
		cout<<endl<<endl;
		break;
		
	
					
		case 3:	cout<<"enter the number to be searched";
			cin>>e;
			for(i=0;i<n;i++)
			{
				if(a[i]==e)
				{
					
					r=i;
				}
			}
			cout<<"the number "<<e<<" is present on "<<r<<" position";
			cout<<endl<<endl;
			break;
			
			
			
			
			
			
				case 4: cout<<endl<<endl;
					for(i=0;i<n;i++)
					{
						cout<<a[i]<<"\t";
					}
					cout<<endl<<endl;
					break;
					
					
		
			
	
	
	
	
	
	
	
}
cout<<"enter y to continue";
cin>>c;
	
	
	
	

}
	
}

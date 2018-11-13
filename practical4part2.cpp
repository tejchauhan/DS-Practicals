#include <iostream>
using namespace std;
struct node
{
	int d;
	struct node * p;
};
int main()
{
	struct node * start=NULL;  // value of node hori hai store
	struct node * x,* i,* y,* z,* f;
	char c;
	int r,t=0,b,v;
	cout<<"if you want to continue press y ,else n  ";
	
	cin>>c;
	if(c=='y')
	{
		
			x=new(struct node);
	cout<<"enter the data";
	cin>>x->d;
	x->p=NULL;  // -> kyun use hua . kyun nhi
	start=x;
	f=x;


	cout<<"if you want to continue press y ,else n  ";
	cin>>c;
	while(c=='y')
	{
		y=new(struct node);
		cout<<"enter the data";
		cin>>y->d;
		y->p=start;
		start=y;
		x->p=y;
		
		cout<<"if you want to continue press y ,else n   ";
		cin>>c;
		
	}

	
		


	
	 i=start;
	do
	{
		cout<<"address "<<i<<"\t data  "<<i->d<<"  \t ptr  "<<i->p<<endl;
		i=i->p;
		
	}
	while(i!=start);
	
	
	
	cout<<"\n\n all the elements are entered\n\n";
	
	
	
	
	cout<<"if you want to continue press y ,else n  ";
	cin>>c;
	while(c=='y')
	{
	
	
	
	cout<<"enter \n1 for insertion\n2 for deletion\n3 for searching\n4 for displaying"<<endl;
	
	
	cin>>v;
	switch(v)
	{
		case 1: cout<<"enter\n1 for insertion in the begining\n2 for insertion the middle\n3 for insertion in the end\n";
		cin>>b;
		switch(b)
		{
			case 1:y=new(struct node);
					cout<<"enter the data";
					cin>>y->d;
					y->p=start;
					start=y;
					x->p=y;
				
						break;
			case 2: y=new(struct node);
					 i=start;
					 cout<<"enter the element you want to enter ";
					 cin>>y->d;
					 cout<<" enter the number after which you want to enter the element";
					 cin>>r;
					 
					 do
					 {
					 	if(i->d==r)
					 	{
					 		y->p=i->p;
					 		i->p=y;
					 		cout<<endl<<endl<<"element inserted"<<endl<<endl;
					 		break;
						 }
						 else
						 {
						 	i=i->p;
						 }
					 }
					 while(i!=start);
					 break;
			case 3: 	y=new(struct node);
						cout<<"enter the data";
						cin>>y->d;
						f->p=y;
						
						f=y;
						f->p=start;
				
				
			
					break;
			default:
				cout<<"wrong input";
				break;
							
		}
		break;
		case 2:
				cout<<"enter the element to be deleted";
				cin>>r;
				i=start;
				do
				{
					if(i->d==r)
					{ 
						if(start->d==r)
						{
							t=1;
							start=i->p;
							y=y->p; //      Agr yeh do nhi dalen toh circular hi chal rhi hai    
							x->p=y; //      like :   9  8  7  6  5     ka     8  7  6  5  9  ara hai
							break;
						
						}
						else if(i->p==start)
						{
							t=2;
							z->p=i->p;
						break;
							
						}
						else
						{
						t=1;
						z->p=i->p;
						
						break;
			
						}
					}
					else
					{
						z=i;
						i=i->p;
					}
					
				}
				while(i!=start);
				
				
				if(t==2)
				{
					x=z;
					cout<<"\n\nelement is deleted\n\n";
				}
				else if(t==1)
				{
					cout<<"\n\nelement is deleted\n\n";
				}
				else 
				{
					cout<<"\nelement entered is not present in the list\n";
				}
			
			break;
	case 3:
			 i=start;
			 cout<<"enter the element you want to search ";
			 cin>>r;
			 
			 do
			 {
			 	if(i->d==r)
			 	{
			 		t=1;
			 		cout<<endl<<endl<<"element found at   address"<<i<<"    data "<<r<<endl<<endl;
			 		break;
				 }
				 else
				 {
				 	i=i->p;
				 }
			 }
			 while(i!=start);
			 
			 if(t!=1)
			 {
			 	cout<<endl<<endl<<"element not found in the circular linked list "<<endl<<endl;
			 }
			 break;
	case 4:i=start;
			do
			{
				cout<<"address "<<i<<"\t data  "<<i->d<<"  \t ptr  "<<i->p<<endl;
				i=i->p;
				
			}
			while(i!=start);
		
		break;
	
		
		
		
		
		
	}
	cout<<"if you want to continue press y ,else n  ";
	cin>>c;
	
	
	
	
}
	
	

}

else
{
	cout<<"address  "<<i;
}

}






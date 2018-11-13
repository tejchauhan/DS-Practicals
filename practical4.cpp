#include <iostream>
using namespace std;
struct node
{
	int d;
	struct node * p;
	struct node * n;
};
int main()
{
	struct node * start=NULL;  // value of node hori hai store
	struct node * x,* i,* y,* z,* f,*g;
	char c;
	int r,v,b,t;
		cout<<"if you want to continue press y ,else n  ";
		cin>>c;
		if(c=='y')
		{
		

	g=new(struct node);
	cout<<"enter the data";
	cin>>g->d;
	g->n=NULL;  // -> kyun use hua . kyun nhi
	start=g;
	x=g;

	cout<<"if you want to continue press y ,else n  ";
	cin>>c;
	while(c=='y')
	{
		y=new(struct node);
		x->p=y;
		cout<<"enter the data";
		cin>>y->d;
		y->p=start;
		start=y;
		y->n=x;
		
		x=y;
		
		cout<<"if you want to continue press y ,else n   ";
		cin>>c;
		
	}
	x->p=NULL;
	
	
	
	i=start;
	while(i!=NULL)
	{
		cout<<"address "<<i<<"  \t previous  "<<i->p<<"\t data  "<<i->d<<"\t  next  "<<i->n<<endl;
		i=i->n;
	}
	
	
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
			case 1:
					y=new(struct node);
						x->p=y;
						cout<<"enter the data";
						cin>>y->d;
						y->p=start;
						start=y;
						y->n=x;
						
						x=y;
						break;
			case 2: y=new(struct node);
					 i=start;
					 cout<<"enter the element you want to enter ";
					 cin>>y->d;
					 cout<<" enter the number after which you want to enter the element";
					 cin>>r;
					 
					 while(i!=NULL)
					 {
					 	if(i->d==r)
					 	{
					 		y->n=i->n;
					 		i->n=y;
					 		y->p=i;
					 		cout<<endl<<endl<<"element inserted"<<endl<<endl;
					 		break;
						 }
						 else
						 {
						 	i=i->n;
						 }
					 }
					 break;
			case 3:
				
					y=new(struct node);
					g->n=y;
					cout<<"enter the data";
					cin>>y->d;
					y->p=g;
					
					g=y;
					g->n=NULL;
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
			f=i->n;
			while(i!=NULL)
			{
				if(i->d==r)
				{
					if(start->d==r)
					{
						start=i->n;
						f->p=NULL;
						cout<<"\n\nelement is deleted\n\n";
						break;
					
					}
					else if(f==NULL)
					{
						z->n=NULL;
						cout<<"\n\nelement is deleted\n\n";
						break;
						
					}
					else
					{
					
					z->n=i->n;
					f->p=i->p;
					cout<<"\n\nelement is deleted\n\n";
					break;
		
					}
				}
			
				else
				{
					z=i;
					i=i->n;
					f=i->n;
				}
				
			}
			break;
	case 3:
			 i=start;
			 cout<<"enter the element you want to search ";
			 cin>>r;
			 
			 while(i!=NULL)
			 {
			 	if(i->d==r)
			 	{
			 		t=1;
			 		cout<<endl<<endl<<"element found at   address"<<i<<"    data "<<r<<endl<<endl;
			 		break;
				 }
				 else
				 {
				 	i=i->n;
				 }
			 }
			 if(t!=1)
			 {
			 	cout<<endl<<endl<<"element not found in the doublee linked list "<<endl<<endl;
			 }
			 break;
	case 4:i=start;
		while(i!=NULL)
		{
			cout<<"address "<<i<<"  \t previous  "<<i->p<<"\t data  "<<i->d<<"\t  next  "<<i->n<<endl;
			i=i->n;
		}
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


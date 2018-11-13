#include<iostream>
using namespace std;
struct node
{
	int d;
	node * n;
	
}*top=NULL;
void push(struct node **top,int a)
{
	struct node * y;
	y=new(struct node);
	y->d=a;
	y->n=*top;
	*top=y;
}
void pop(struct node **top)
{
	struct node *i,*w;
	i=*top;
	w=i;
	i=i->n;
	*top=i;
	delete(w);
}
void display (struct node *top)
{
		cout<<"      top is  "<<top->d<<endl;
	
}
int main()
{
	struct node *x;
	int a;
	char c;
	cout<<"enter y to push to stack "<<endl;
	cin>>c;
	while(c=='y')
	{
		cout<<"enter no. you want to push"<<endl;
		cin>>a;
		push(&top,a);
		cout<<"enter y to push to stack "<<endl;
		cin>>c;
		
	}
	display(top);
	pop(&top);
	display(top);
	
	
}

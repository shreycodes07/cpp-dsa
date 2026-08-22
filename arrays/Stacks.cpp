#include<iostream>
using namespace std;
class stack
{
struct node
{
int data;
node *next;
};
node *top;
public:stack()
{
top=NULL;
}
void push(); // to insert a node at the top of the stack
void pop(); // to delete a node from the top of the stack
void display(); // to display stack content
};
void stack::push()
{
node *temp;
temp=new node;
if(temp==NULL) // if no memory is allocated
cout<<"\nstack overflow";
else
{
cout<<"\nenter the data:"; // else create a new node with data
cin>>temp->data;
temp->next=NULL;
if(top==NULL) // if stack is empty then make temp the new top
top=temp;
else
{
temp->next=top; // else connect temp to top and shift top to temp.
top=temp;
}
display();
}
}
void stack::pop()
{
node *temp;
if(top==NULL) // checks for empty stack
cout<<"\nstack empty";
else
{
temp=top; // give another variable name (temp) to top
cout<<"\ndelete no"<<top->data; // display what is getting deleted
top=top->next; // shift the top to new top
delete temp; // now delete temp.
display();
}
}
void stack::display()
{
node *temp=top;
cout<<"\nStack Content:";
while(temp!=NULL) //displays stack content
{cout<<"\n"<<temp->data;
temp=temp->next;
}
}
int main()
{
int c;
stack z;
do
{
cout<<"\nStack\n1.push 2.pop 3.exit";
cin>>c;
switch(c)
{
case 1: z.push();break;
case 2: z.pop();break;
}
}
while(c!=3);
return 0;
}

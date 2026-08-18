#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class list
{
struct node
{
	unsigned short int roll;
char name[30];
float percent;
node*next;
};
node*first,*last,*temp;
public: void create(); // to create linked list of n nodes
void display(); // to display all nodes of a linked list
void insertion(); // to perform insertion of a node in a linked list
void deletion(); // to delete a node from a given position in a linked list
void searchroll(); // to search for a node with a given roll
void count(); // to count the nodes of a linked list.
};
void list :: create()
{int n,i=1;
cout<<"\nEnter no. of nodes";
cin>>n;
first=new node; // new allocates memory to a node
cout<<"\nEnter data for node"<<i; // enter data for the first node
cout<<"\nEnter roll";
cin>>first->roll;
cout<<"\nEnter name";
cin>>first->name;
cout<<"\nEnter percentage";
cin>>first->percent;
first->next=NULL;
temp=first; // giving another variable name to first
for(int j=1;j<n;j++) // loop to create remaining n-1 nodes
{last=new node;
cout<<"\nEnter data for node "<<j+1;
cout<<"\nEnter roll";
cin>>last->roll;
cout<<"\nEnter name";
cin>>last->name;
cout<<"\nEnter percentage";
cin>>last->percent;
last->next=NULL;
temp->next=last; //connecting the temp node to first.
temp=last;} // moving temp to last
display();
}
void list::display()
{
temp=first; // giving another name temp to first
cout<<"ROll"<<setw(10)<<"NAME"<<setw(10)<<"PERCENT"<<endl;
while(temp!=NULL) // till end of the list is reached
{cout<<temp->roll<<setw(10)<<temp->name<<setw(10)<<temp->percent;
temp=temp->next; // moving the pointer to the next node
cout<<endl;
}
}
void list::insertion()
{
int pos;
node *avail;
avail=new node; // node avail created and data entered
cout<<"\nEnter data for node";
cout<<"\nEnter roll";
cin>>avail->roll;
cout<<"\nEnter name";
cin>>avail->name;
cout<<"\nEnter percentage";
cin>>avail->percent;
avail->next=NULL;
cout<<"Enter the position of node \n";
cin>>pos; //position entered for insertion of a node
if(pos==1) // if element to be inserted at position 1 then connect avail to first and then move first to avail
{
avail->next=first;
first=avail;
}
else // for any position other than 1
{
temp=first; // give another name temp to first
for(int i=1;i<=pos-2;i++) //loop will run only for position 3 or above
temp=temp->next; // shifts temp to next node till loop runs
avail->next=temp->next; //connect avail to the node which is after the temp
temp->next=avail; // connect temp to avail
}
display();
}
void list::deletion()
{
int pos;
cout<<"enter the position to be deleted\n";
cin>>pos;
temp=first;
if(pos==1) // if element to be deleted at position 1 then move first to the next node and delete temp
{
first=first->next;
delete temp;
}
else // for any position other than 1
{
for(int i=1;i<=pos-2;i++) // loop will run only for position 3 or above
temp=temp->next; // shifts temp to next node till loop runs
last=temp->next; // give another name last to the node present after temp
temp->next=last->next; // connect temp to the node after last
delete last; // delete last
}
display();
}
void list::searchroll()
{
temp=first;
int x,c=0;
cout<<"Enter roll to be searched \n";
cin>>x;
while(temp!=NULL)
{
if(temp->roll==x)
{
c=1;
break;
}
temp=temp->next;
}
if(c==0)
cout<<"Element not present";
else
cout<<"Element present";
}
void list::count()
{
cout<<endl;
int c=0;
temp=first;
while(temp!=NULL)
{
c++;
temp=temp->next;
}
cout<<"summation of nodes = "<<c<<endl;
}
int main()
{int c;
list a;
do{
cout<<"\nenter your choice.\n1.Create\n2.Display\n3 insertion\n4.deletion\n5:searchroll\n6:count\n0:exit";
cin>>c;
switch(c)
{
case 1:a.create(); break;
case 2:a.display(); break;
case 3: a. insertion(); break;
case 4: a.deletion(); break;
case 5: a.searchroll(); break;
case 6: a.count(); break;
default:cout<<"\n Wrong Choice";
}}
while(c!=0);
getch();
}

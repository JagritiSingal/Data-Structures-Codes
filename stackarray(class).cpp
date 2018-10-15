#include<iostream>
using namespace std;
int maxx,i,n;
int top=-1;
class stack
{
int a[20];
public:

void push(int item)
{
 if(top==(maxx-1))
  cout<<"Stack is full";
 else
 {
  top++;
  a[top]=item;
 }
}

void pop()
{
 int ele;
    if(top==-1)
        cout<<"underflow"<<endl;
    else
    {
        ele=a[top];
        cout<<ele<<endl;
        top--;
    }
}

void traverse()
{
    if(top==-1)
        cout<<"List is empty"<<endl;
    else
    {
        for(int i=0; i<=top; i++)
            cout<<a[i]<<" ";
    }
    cout<<endl;
}
};

int main()
{
int item;
stack s;
cout<<"enter no. of elements:"<<endl;
cin>>maxx;
while(1)
{
   cout<<"\n1.push\n2.pop\n3.traverse\n";
   cout<<"\nenter ur choice:";
   cin>>n;
  switch(n)
  {
   case 1:
   cout<<"Enter item";
   cin>>item;
   s.push(item);
   break;
   case 2:
   s.pop();
   break;
   case 3:
   s.traverse();
   break;
   default:
   cout<<"Invalid option";
  }
}
return 0;
}

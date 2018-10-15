#include<iostream>
using namespace std;

#define MAXSIZE 20

int a[MAXSIZE];
int top=-1;

void push(int item)
{
    if(top== MAXSIZE-1)
    {
        cout<<"Stack overflow"<<endl;
    }
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

int main()
{
    int item;
    int ch;
    while(1)
    {

            int ch;
            cout<<"Choose \n1.push\n"<<"2.pop\n"<<"3.traverse\n";
            cout<<"Please enter your choice: ";
            cin>>ch;
            switch(ch)
            {
                case 1:
                    cout<<"Enter item: ";
                    cin>>item;
                    push(item);
                break;

                case 2:
                    pop();
                    break;

                case 3: traverse();
                    break;

                default :cout<<"An Invalid Choice!!!\n";

            }
        }

    return 0;
}

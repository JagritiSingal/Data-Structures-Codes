#include<iostream>
#include<stdlib.h>
using namespace std;

struct list
{
    int info;
    struct list *next;
};

struct list *top =NULL;

    void push(int item)
    {
        struct list *ptr;
        ptr =new list;
        if (top== NULL)
        {
            top=ptr;
            ptr -> info =item;
            ptr -> next =NULL;
        }

        else
        {
            ptr -> info=item;
            ptr -> next =top;
            top = ptr;
        }
    }

        void traverse()
        {
            struct list *temp;
            if(top == NULL)
            {
                cout<<"Empty";
            }
            else
            {
                temp=top;
                 while(temp != NULL)
                {
                    cout<<temp ->info<<" ";
                    temp= temp->next;
                }
                cout<<endl;
            }
        }

            void pop()
            {
                struct list *temp;
                if(top == NULL)
                {
                    cout<<"Underflow";
                }
                else
                {
                    temp=top;
                    top=temp -> next;
                    delete temp;
                }

            }


int main()
{
    int ch,item;
    while(1)
    {
         cout<<"Enter your choice"<<endl;
         cout<<"1.push"<<endl;
         cout<<"2.pop"<<endl;
         cout<<"3.traverse"<<endl;
         cin>>ch;
        switch(ch)
        {

     case 1:
         cout<<"Enter item"<<endl;
         cin>>item;
         push(item);
     break;

     case 2:
        pop();
        break;

     case 3: traverse();
     break;

        default:
        exit (0);
        }
    }
    return 0;
}

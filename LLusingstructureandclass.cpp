#include<iostream>
#include<stdlib.h>
using namespace std;

struct list
{
    int info;
  struct list *next;

};

struct list *start=NULL;

class linkedlist
{
    public:
    void insertbeg(int item)
    {
        struct list *ptr;
        ptr =new list();
        if (start== NULL)
        {
            start=ptr;
            ptr -> info =item;
            ptr -> next =NULL;
        }

        else
        {
            ptr -> info=item;
            ptr -> next =start;
            start = ptr;
        }
    }


    void insertend(int item)
    {
      struct list *ptr, *temp;
        ptr =new list();
         if (start== NULL)
        {
            ptr -> info =item;
            ptr -> next = NULL;
               start=ptr;
        }

        else
        {
            ptr -> info =item;
            ptr -> next =NULL;
            temp= start;
            while(temp -> next!= NULL)
            {
                temp = temp -> next;
            }

            temp -> next= ptr;
        }
    }

        void traverse()
        {
            struct list *temp;
            if(start == NULL)
            {
                cout<<"Empty";
            }
            else
            {

                temp=start;
                while(temp != NULL)
                {
                    cout<<temp ->info<<" ";
                    temp= temp -> next;
                }
            }
        }

            void deletebeg()
            {

                struct list *temp;
                if(start == NULL)
                {
                    cout<<"Underflow";
                }
                else
                {
                    temp=start;
                    start=temp -> next;
                    delete temp;
                }
            }

            void deleteend()
            {
                struct list *temp1,*temp;
                if(start == NULL)
                {
                    cout<<"Underflow";
                }
                else if(start -> next == NULL)
                {
                    temp=start;
                    start=NULL;
                    delete temp;
                }
                else
                {
                    temp=start;
                    while(temp -> next != NULL)
                    {

                        temp1=temp;
                        temp=temp -> next;
                    }
                    temp1 -> next = NULL;
                    delete temp;
                }
            }
};



int main()
{
    linkedlist l;
    int ch,item;
    while(1)
    {
         cout<<"Enter your choice";
         cout<<"1.Insertion in beginning"<<endl;
         cout<<"2.Insertion in end"<<endl;
         cout<<"3.traversal"<<endl;
         cout<<"4.Deletion in beginning"<<endl;
         cout<<"5.Deletion in end"<<endl;
         cin>>ch;
        switch(ch)
        {

     case 1:
         cout<<"Enter item"<<endl;
         cin>>item;
         l.insertbeg(item);
     break;

     case 2:
         cout<<"Enter item"<<endl;
          cin>>item;
         l.insertend(item);
     break;

     case 3: l.traverse();
     break;

     case 4:
        l.deletebeg();
        break;

     case 5:
        l.deleteend();
        break;

        default:
        exit (0);
        }
    }
    return 0;
}

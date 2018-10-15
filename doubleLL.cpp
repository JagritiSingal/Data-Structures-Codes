#include<iostream>
#include<stdlib.h>
using namespace std;

struct list
{
    int info;
    struct list *next;
    struct list *prev;
};

struct list *start =NULL, *tail=NULL;

    void insertbeg(int item)
    {
        struct list *ptr;
        ptr =new list;
        if (start== NULL)
        {
            ptr -> info = item;
            start=ptr;
            tail = ptr;
            ptr -> next =NULL;
            ptr -> prev=NULL;
        }

        else
        {
            ptr -> info=item;
            ptr -> next =start;
            ptr -> prev = NULL;
            start ->prev = ptr;
            start = ptr;
            //start -> prev = NULL;

        }
    }


    void insertend(int item)
    {
      struct list *ptr, *temp;
        ptr =new list;
         if (tail== NULL)
        {
            ptr -> info =item;
            start= ptr;
            tail=ptr;
            ptr -> next = NULL;
            ptr -> prev = NULL;
        }

        else
        {
            ptr -> info =item;
            tail -> next =ptr;
            ptr -> next = NULL;
            ptr -> prev = tail;
            tail = ptr;

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
                cout<<endl;
            }
        }

            void deletebeg()
            {

                struct list *temp;
                if(start == NULL)
                {
                    cout<<"Underflow";
                }
                else if (start == tail)
                {
                    temp= start;
                    start = NULL;
                    tail = NULL;
                    delete temp;
                }
                else
                {
                    temp=start;
                    start=temp -> next;
                    start ->prev = NULL;
                    delete temp;

                }
            }

            void deleteend()
            {
                struct list *temp;
                if(tail == NULL)
                {
                    cout<<"Underflow";
                }
                else if(start == tail)
                {
                    temp=tail;
                    start=NULL;
                    tail=NULL;
                    delete temp;
                }
                else
                {
                    temp = tail;
                    tail = temp -> prev;
                    tail ->next = NULL;
                    delete temp;
                }
            }



    int main()
{
    int ch,item;
    while(1)
    {
         cout<<"Enter your choice"<<endl;
         cout<<"1.Insertion in beginning"<<endl;
         cout<<"2.Insertion in end"<<endl;
         cout<<"3.traversal"<<endl;
         cout<<"4.Deletion in beginning"<<endl;
         cout<<"5.Deletion in end"<<endl;
         cin>>ch;
        switch(ch)
        {

     case 1:
         cout<<"Enter item: ";
         cin>>item;
         cout<<endl;
         insertbeg(item);
     break;

     case 2:
         cout<<"Enter item: ";
          cin>>item;
          cout<<endl;
         insertend(item);
     break;

     case 3: traverse();
     break;

     case 4:
        deletebeg();
        break;

     case 5:
        deleteend();
        break;

        default:
        exit (0);
        }
    }
    return 0;
}

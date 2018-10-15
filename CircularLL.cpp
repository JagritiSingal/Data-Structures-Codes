#include<iostream>
#include<stdlib.h>
using namespace std;

struct list
{
    int info;
    struct list *next;
};

struct list *start =NULL;

 void insertbeg(int item)
    {
        struct list *ptr, *temp;
        ptr =new list;
        if (start== NULL)
        {
            start=ptr;
            ptr -> info =item;
            ptr -> next =start;
        }

        else
        {
            ptr -> info=item;
            ptr -> next =start;
            temp = start;

            while(temp -> next != start)
            {
                temp=temp -> next;
            }
            temp -> next = ptr;
            start = ptr;
        }
    }

      void insertend(int item)
    {
      struct list *ptr, *temp;
        ptr =new list;
         if (start== NULL)
        {
            ptr -> info =item;
             start=ptr;
            ptr -> next = start;
        }

        else
        {
            ptr -> info =item;
            temp= start;
            while(temp -> next!= start)
            {
                temp = temp -> next;
            }

            temp -> next= ptr;
            ptr -> next = start;
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
                while(temp->next != start)
                {
                    cout<<temp ->info<<" ";
                    temp= temp -> next;
                }
                cout<<temp ->info<<" "<<endl;
            }
        }

        void deletebeg()
            {

                struct list *temp;
                if(start == NULL)
                {
                    cout<<"Underflow";
                }
                 else if(start -> next == start)
                {
                    temp=start;
                    start=NULL;
                    delete temp;
                }
                else
                {
                    temp=start;
                    while(temp -> next != start)
                    {
                        temp=temp -> next;
                    }
                    temp -> next = start -> next;
                    temp = start;
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
                else if(start -> next == start)
                {
                    temp=start;
                    start=NULL;
                    delete temp;
                }
                else
                {
                    temp=start;
                    while(temp -> next != start)
                    {

                        temp1=temp;
                        temp=temp -> next;
                    }
                    temp1 -> next = start;
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

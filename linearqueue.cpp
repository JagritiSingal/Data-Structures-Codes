#include<iostream>
#include<stdlib.h>
using namespace std;

int r=-1;
int f=-1;
int i,j,a[20];
int insertqueue(int item,int n)
{
    if(r == n-1) // if(r - f == n -1)
    {
        cout<<"Overflow";
        return 0;
    }
    if(f==-1)
    {
        f=0;
        r=0;
    }
    else
    {
        r++;
    }
    a[r]=item;
}

int traversequeue(int n)
{
    if(f==-1)
    {
        cout<<"No elements to display"<<endl;
        return 0;
    }

        for(i=f;i<=r;i++)
        {
            cout<<a[i]<<" ";
        }

}
int deleteq(int n)
{
    if(f==-1)
    {
        cout<<"underflow";
        return 0;
    }

    int item=a[f];
    cout<<item;
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        f++;
    }

}
int main()
{
    int item,n,ch;
    cout<<"Enter n";
    cin>>n;
    while(1)
    {
    cout<<"Enter choice ";
    cin>>ch;

      switch(ch)
      {
      case 1: cout<<"Enter item ";
              cin>>item;
              insertqueue(item,n);
              break;

      case 2: traversequeue(n);
              break;

      case 3:deleteq(n);
             break;

      default:
      exit(0);

      }
    }
}

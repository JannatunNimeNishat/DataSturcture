#include<bits/stdc++.h>
using namespace std;

//creating link list
struct linklist
{
    int data;
    linklist *address;
};
linklist *head, *nptr,*tptr;


int main()
{
    cout<<"\t\t\t\t\t\t\t\tLinklist Insertion: \n"<<endl;
    //creating a linklist
    head = NULL;

    int n,values;
    cout<<"Enter how many nodes do you want?: "<<endl;
    cin>>n;
    cout<<"Enter the values of your node: "<<endl;
    for(int i=0; i<n; i++)
    {
        nptr = new (linklist);
        cin>>values;

        nptr->data = values;
        nptr->address = NULL;

        if(head==NULL)
        {
            head = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->address = nptr;
            tptr = nptr;
        }
    }

    //inset opetation
    cout<<"----------------------------------------------"<<endl;
    cout<<"choose one: "<<endl;
    cout<<"\t1. for insert node at begining of the linklist\n\t2. for insert node at vary last of the linklist\n\t3.for insert node at a specific location of the linklist\n"<<endl;
    cout<<"Enter your choice : "<<endl;
    int choice=0;
    cin>>choice;
    switch(choice)
    {
    case 1:
        // //insert at very begining
        cout<<"Enter your node value: ";
        cin>> values;
        nptr = new (linklist);
        nptr->data = values;
        nptr->address = head;
        head = nptr;
        break;
    case 2:
        //  //insert at very last
        cout<<"Enter your node value: ";
        cin>> values;
        nptr = new (linklist);
        nptr->data = values;
        nptr->address = NULL;
        tptr = head;
        while(tptr->address!=NULL)
        {
            tptr= tptr->address;
        }
        tptr->address = nptr;
        break;

    case 3:
        // // insert at specific possession
        int pos, flag =1,c =0;
        tptr = head;
        while(tptr->address!=NULL)
        {
            c++;
            tptr=tptr->address;
        }
        cout<<"Enter the possession for your node: "<<endl;
        cin>>pos;
        if(pos>c)
        {
            cout<<"invalid location";
        }
        else
        {
            cout<<"Enter your node value: "<<endl;
            cin>>values;
            nptr = new (linklist);
            nptr->data = values;
            nptr->address = NULL;
            tptr = head;
            while(flag<pos)
            {
                tptr= tptr->address;
                flag++;
            }
            nptr->address = tptr->address;
            tptr->address = nptr;
            break;

        }

    }

//showing the linklist
    tptr = head;
    cout<<endl;
    cout<<"linklist values are: "<<endl;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->address;
    }


}






















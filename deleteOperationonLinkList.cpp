#include<bits/stdc++.h>
using namespace std;

struct linklist
{
    int data;
    linklist *nAddress;
};
linklist *head, *nptr, *tptr,*dNode;

int main()
{
    cout<<"\t\tDeletation operation: \n"<<endl;
    head = NULL;
    int n,values,c=0;
    cout<<"Enter the number of node u want: "<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid size";

    }
    else
    {
        cout<<"Enter the values: "<<endl;

        for(int i=0; i<n; i++)
        {

            cin>>values;

            nptr = new (linklist);
            nptr->nAddress = NULL;
            nptr->data = values;

            if(head==NULL)
            {
                head = nptr;
                tptr= nptr;
            }
            else
            {
                tptr->nAddress= nptr;
                tptr = nptr;
            }
            c++;
        }
    }
    cout<<"\t\t\tDelete operation\n"<<endl;
    cout<<"press 1. to delete the first node\npress 2. to delete the lase node\npress 3. to delete from a specific possition \n"<<endl;
    int choice=0;
    cout<<"choice: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        //delete at very first
        tptr = head;
        head = tptr->nAddress;
        break;
    case 2:
        //delete at very last

        tptr = head;
        while(tptr->nAddress!=NULL)
        {

            dNode= tptr;
            tptr= tptr->nAddress;
        }

        dNode->nAddress =NULL;
        break;
    case 3:
        //delete after a given position
        int dPos=0,flag=1;
        cout<<"Enter the position: ";
        cin>>dPos;

        if( dPos<=0 ||dPos>c)
        {
            cout<<"Invalid possition"<<endl;
        }
        else if(dPos==1) // remove the 1st node
        {
            tptr = head;
            head = tptr->nAddress;
        }
        else
        {
            tptr = head;
            while(flag<dPos-1)
            {

                tptr = tptr->nAddress;
                flag++;

            }
            dNode= tptr->nAddress;
            /*
            note:
            dNote=tptr
            means they are the same node

            dNote = tptr->nAddress
            means dNote now points to the next node addrress of tptr node.
            */

            // cout<<"raw: "<<dNode->data<<endl;
            //cout<<"raw: "<<tptr->data<<endl;
            tptr->nAddress = dNode->nAddress;
            free(dNode);
        }
        break;


    }


//printing the link list
    tptr = head;
    cout<<"Link list: "<<endl;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->nAddress;
    }

}

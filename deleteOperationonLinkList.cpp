#include<bits/stdc++.h>
using namespace std;

struct linklist{
    int data;
    linklist *nAddress;
};linklist *head, *nptr, *tptr;

int main()
{
    cout<<"\t\tDeletation operation: \n"<<endl;
    head = NULL;
    int n,values;
    cout<<"Enter the number of node u want: "<<endl;
    cin>>n;
    cout<<"Enter the values: "<<endl;

    for(int i=0;i<n;i++)
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

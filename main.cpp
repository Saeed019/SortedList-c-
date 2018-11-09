#include <iostream>
#include"SortedType.cpp"

using namespace std;

int main()
{   cout<<"cheacking"<<endl;
    int n,r,s,d;
    SortedType<int> p;
    cout<<"Insert four item"<<endl;
    for(int index=0;index<4;index++)
    {
        cin>>n;
        p.PutItem(n);
         cout<<" "<<endl;

    }

    p.print();
     cout<<"\n";
    cout<<"liength is:"<<endl;
    cout<<p.GetLength();
     cout<<"\n";
    cout<<"Insert a number"<<endl;
    cin>>r;
    p.PutItem(r);
    p.print();
    cout<<"\n";
    bool found =false;
    cout<<"Enter a number to retreve";
    cout<<"\n";
    cin>>s;
     p.GetItem(s,found);

    if(found==1)
        cout<<"Item is found";
    else
        cout<<"Item is not found";
        cout<<"\n";
        cout<<"Enter a number to retreve";
    cout<<"\n";
    cin>>s;
     p.GetItem(s,found);

    if(found==1)
        cout<<"Item is found";
    else
        cout<<"Item is not found";
        cout<<"\n";
        cout<<"Enter a number to retreve";
    cout<<"\n";
    cin>>s;
     p.GetItem(s,found);

    if(found==1)
        cout<<"Item is found";
    else
        cout<<"Item is not found";
        cout<<"\n";

        cout<<"Enter a number to delete:"<<endl;
        found = false;
        cin>>d;
        found=p.DeleteItem(d);
        if(found ==1)
        {
            cout<<"Item is deleted"<<endl;
        }
        else
            cout<<"Item can not be deleted"<<endl;
            cout<<"\n";
            cout<<"Length is: "<<endl;
            cout<<p.GetLength();
            cout<<"\n";


        cout<<"Enter a number to delete:"<<endl;
        cin>>d;
        found=p.DeleteItem(d);
       if(found == 1)
        {
            cout<<"Item is deleted"<<endl;
        }
        else
            cout<<"Item can not be deleted"<<endl;
            cout<<"\n";
            cout<<"Length is:"<<endl;
            cout<<p.GetLength();
            cout<<"\n";

            p.print();
            cout<<"\n";


        cout<<"Enter a number to delete:"<<endl;
        cin>>d;
        found=p.DeleteItem(d);
       if(found == true)
        {
            cout<<"Item is deleted"<<endl;
        }
        else
            cout<<"Item can not be deleted"<<endl;                 cout<<"\n";


         cout<<"Enter a number to delete:"<<endl;
        cin>>d;
        found=p.DeleteItem(d);
       if(found == 1)
        {
            cout<<"Item is deleted"<<endl;
        }
        else
            cout<<"Item can not be deleted"<<endl;
            p.print();
            cout<<"\n";
            p.MakeEmpty();
            cout<<"After calling MakeEmpty list is: "<<endl;
            p.print();
cout<<"Insert four item"<<endl;
    for(int index=0;index<4;index++)
    {
        cin>>n;
        p.PutItem(n);
         cout<<" "<<endl;

    }
   cout<< p.GetNextItem()<<" ";
   cout<< p.GetNextItem()<<" ";
   cout<< p.GetNextItem()<<" ";
   cout<<"\n";
   cout<<"Reset the list"<<endl;
   p.ResetList();
   cout<< p.GetNextItem();





        return 0;
}

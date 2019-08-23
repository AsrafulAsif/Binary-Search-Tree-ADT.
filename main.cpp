#include <iostream>
#include "TreeType.cpp"
using namespace std;

int main()
{
    TreeType <int> mytree;

    int n;

    if(mytree.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;

    //Enter item
    cout<<"Enter ten item:"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>n;
        mytree.InsertItem(n);
    }

    if(mytree.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;


     //tell about the length of tree
    cout<<mytree.LengthIs()<<endl;
     //Found item is it here on tree or not!
    bool found;
    int temp=9;
    mytree.RetrieveItem(temp,found);

    if(found)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    temp=13;
    mytree.RetrieveItem(temp,found);
    if(found)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    //print tree

    //print tree in order
    cout<<"In order:"<<endl;
    mytree.ResetTree(IN_ORDER);
    bool finish=false;

    for(int i=0; i<mytree.LengthIs(); i++)
    {
        mytree.GetNextItem(temp, IN_ORDER, finish );
        cout<<temp<<" ";
    }
    cout<<endl;
    //print tree pre-order
    cout<<"Pre order:"<<endl;
    mytree.ResetTree(PRE_ORDER);

    for(int i=0; i<mytree.LengthIs(); i++)
    {
        mytree.GetNextItem(temp, PRE_ORDER, finish );
        cout<<temp<<" ";
    }
    cout<<endl;
    //print tree post-order
    cout<<"Post order:"<<endl;
    mytree.ResetTree(POST_ORDER);

    for(int i=0; i<mytree.LengthIs(); i++)
    {
        mytree.GetNextItem(temp, POST_ORDER, finish );
        cout<<temp<<" ";
    }
    cout<<endl;

    mytree.MakeEmpty();
    return 0;
}

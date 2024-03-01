#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int size;
    cout<<"How many charecter : ";
    cin>>size;
    char arr[size+1];
    cin>>arr;
    char data;
    cout<<"Please Enter Data : ";
    cin>>data;
    int i;
    int c=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==data)
        {
            cout<<"Data found Success"<<endl;
            cout<<"Your Data is : "<<arr[i]<<endl;
            cout<<"Your Index is : "<<i;
            c=1;
            break;

        }
    }
    if(c==0)
    {
        cout<<"data not found";

    }
    return 0;
}

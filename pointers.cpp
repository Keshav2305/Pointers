#include <iostream>
using namespace std;

int main()
{
    //pointer

    int myvar=23;
    float fvar=23.454;
    float *fptr=&fvar;
    int *ptr=&myvar;
    cout<<"Value of var: "<<myvar<<" and Value of float var: "<<fvar<<endl;
    cout<<"Value present at address given to pointer (integer): "<<*ptr<<" (float): "<<*fptr<<endl;
    cout<<"Address of value in pointer(integer): "<<ptr<<" (float):"<<fptr<<endl;
    cout<<"Adress of value (integer): "<<&myvar<<" (float): "<<&fvar<<endl;
    cout<<"Address of integer pointer: "<<&ptr<<" and address of float pointer: "<<&fptr<<endl;

    //array pointer

    int arr[5]={1,2,3,4,5};
    cout<<"The array is: "<<endl;
    int *arrptr=&arr[0];
    for(int i=0;i<5;i++)
    {
        
        cout<<*arrptr<<" ";
        arrptr++;
    }
    cout<<endl;

    //find using pointer;

    int pos;
    int *posptr=&arr[0];
    cout<<"enter a position in array: "<<endl;
    cin>>pos;
    posptr=posptr+(pos-1);
    cout<<"element at "<<pos<<" position is "<<*posptr;   
    return 0;
}
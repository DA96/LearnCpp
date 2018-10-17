// Array rotation one by one using temporary variable

#include<iostream>
using namespace std;

void leftRotatebyOne(int arr[],int n)
{
    //using temporary variable
    int temp = arr[0];
    int i;
    for(i=0; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }

    arr[i]=temp;
}

void leftRotate(int arr[], int n, int d)
{
    for(int i=0; i<d; i++)
        leftRotatebyOne(arr,n);
}

int main()
{
    int s;
    cout<<"Enter size: ";
    cin>>s;

    int arr[s];

    cout<<"Enter array elements: ";

    for(int i=0;i<s;i++)
        cin>>arr[i];

    int d;
    cout<<"Enter number of elements to be rotated: ";
    cin>>d;

    leftRotate(arr,s,d);

    cout<<"Array after rotation: ";
    for(int i=0; i<s; i++)
        cout<<arr[i];

    return 0;
}

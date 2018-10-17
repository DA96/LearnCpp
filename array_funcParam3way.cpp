#include<iostream>
using namespace std;

void f_way1(int *a, int s)
{
    for(int i=0; i<s; i++)
        cout<<a[i];
}

void f_way2(int a[], int s)
{
    for(int i=0; i<s; i++)
        cout<<a[i];
}

void f_way3(int a[10], int s)
{
    for(int i=0; i<s; i++)
        cout<<a[i];
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

    f_way1(arr,s);
    f_way2(arr,s);
    f_way3(arr,s);

    return 0;

}

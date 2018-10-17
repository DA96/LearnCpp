/* Array rotation using juggling algorithm

Finding gcd of n & d. i.e. size of array n and rotation by d elements
Partitioning the array in sets with highest no. of elements in each, with equal no. of elements in each set.

Why doing it?
Placing the element in its correct position (the position which should be after rotation) in one go
using temporary variable
*/

#include<iostream>
#include<algorithm>
using namespace std;

void arrayrotate_juggling(int arr[], int n, int d)
{
    int gcd = __gcd(n,d);

    for(int i=0; i<gcd; i++)
    {
        int temp = arr[i];
        int j = i;

        while(1)
        {
            int k = j+d;

            if(k>=n)
                k = k-n;

            if(k==i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}


int main()
{
    int n,d;

    //Driver program to test function

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    n=8, d=3;

   arrayrotate_juggling(arr,n,d);

    cout<<"Array after rotation: ";
    for(int i=0; i<n; i++)
        cout<<arr[i];

    return 0;

}



// Array rotation using temporary array

#include<iostream>
#include<vector>
using namespace std;

void arrayrotate(vector <int> &v, int d)
{
    int temparr[d];
    //moving first d elements of array in temparr
    for(int i=0; i<d; i++)
        temparr[i]=v[i];

    //moving elements from index d
    for(int i=0; i<v.size()-d; i++)
        v[i]=v[i+d];


    for(int i=v.size()-d, j=0; i<v.size(); i++,j++)
        v[i]=temparr[j];

}

int main()
{
    vector <int> v;

    int s;
    cout<<"Enter size: ";
    cin>>s;

    cout<<"Enter array elements: ";
    int el;

    while(s!=0)
    {
        cin>>el;
        v.push_back(el);
        s--;
    }


    int d;
    cout<<"Enter number of elements to be rotated: ";
    cin>>d;

    arrayrotate(v,d);

    cout<<"Array after rotation: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i];

    return 0;
}

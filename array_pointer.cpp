#include<iostream>
#include"join_p.h"

using namespace std;


int pointer_arrary ()
{
    int n;
    cout<< "Enter the size of the array :"<<endl;
    cin>>n;

    int A[n];
    int *p = A;
    cout<<"Enter the elements of array " <<endl;

    for(int i =0; i<n; i++)
    {
        cout<< " Enter th "<< i+1 << " element " ;
        cin>> *(p+i);
    }

    for( int j =0; j<n ; j++)
    {
        cout<< j[p] << " "; // it can also be outputed as *(p+j)  , *(j+p)  , *(p+j)  ,  *(j+p) , A[j] ,  p[j] ,
    }






 return 0;

}

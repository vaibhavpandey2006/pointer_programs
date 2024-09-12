#include<iostream>
#include"join_p.h"

using namespace std;

int reference_function ( int &a, int &b)
{
    int temp;
    temp = b;
    b=a;
    a=temp;

    return 0;
}



void create_reference( )
{
    int n,m;
    cout<< " Enter the number to pass "<<endl;
    cin>> n ;
    cout<< " Enter the second number to pass "<<endl;
    cin>>m;
    cout<< " Before passing these values for swapping  n was "<< n<< " and m was "<<m <<endl;

    reference_function (n,m);
    cout<< "After value get pass through reference n is : "<< n << " and m is  "<<m<<endl;

    int a=10;
    int &b =a;

    cout<< " The value of a is "<<a<<endl;
    cout << " The value of b is "<<b<< endl;

    b=100;
    cout<<" Changing the value of a through b now a is "<< a<<endl;
    a=200;
    cout<< " Changing the value of b through a so now b is "<<b<<endl;


}

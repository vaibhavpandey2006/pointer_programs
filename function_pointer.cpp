#include<iostream>
#include"join_p.h"

using namespace std;


int add_them (int a ,int b)
{
    return a+b;
}
int product_them ( int a , int b)
{
    return a*b;
}


void create_pointer_function ()
{
    int(*Oprt)( int ,int);

    Oprt = &add_them;
    cout<< " The addition of both values is : "<<Oprt( 4,6)<<endl;

    Oprt = &product_them;
    cout<< " The product of both values is : "<< Oprt(6,3)<<endl;



}

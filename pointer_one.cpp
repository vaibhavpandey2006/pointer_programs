#include<iostream>
#include"join_p.h"

using namespace std;

int decleare_pointer ()
{

    int a= 84;
    int *p =&a; // pointer  decleare

    cout<< " value of a " << a <<endl;
    cout<< "pointer p poining to value " <<*p <<endl;

    cout<< " address of a "<< &a<< endl;
    cout<< " address stored at p " <<p<<endl;
    cout<< " address of pointer p is " <<&p<<endl;


    //modify

    a=30;
    cout<<" modified value of a" <<*p<<endl;
    *p = 84;

    cout<<" modified value of a through pointer is "<< *p<<endl;


    return 0;

}

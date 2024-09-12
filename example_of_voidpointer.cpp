#include<iostream>
#include"join_p.h"

using namespace std;

int initialize_void  ()
{
    int n =10;
    char A = '&';
    float F = 4.92;

    void *ptr ;


    ptr = &A;  // Pointing to integer
    cout << " Void pointer pointing to an character which is : " << *(static_cast<char*>(ptr)) << endl;


    ptr =&F;
    cout<< " Void pointer pointing to an float value which is : "<< *(static_cast<float*>(ptr))<<endl;

    ptr =&n;
    cout<< " Void pointer pointing to an int  value which is : "<< *(static_cast<int*>(ptr))<<endl;


    return 0;

}

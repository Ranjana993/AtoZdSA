#include<bits/stdc++.h>
using namespace std ;



int main(){
    // int a = 4 ;
    // cout << a << endl;
    // cout << &a << endl;

    // int *ptr = &a ;
    // cout << "*ptr " << *ptr << endl;
    // cout << "ptr " << ptr << endl;


// Sizeof 
int a = 5 ;
int *ptr = &a ;
cout <<"ptr " << sizeof(ptr) << endl;
char ch = 'b';
char* c = &ch ;
cout << "char "<< sizeof(c) << endl;
double d = 34.45 ;
double * dtr = & d ;
cout << "dtr " << sizeof(dtr) << endl;


}
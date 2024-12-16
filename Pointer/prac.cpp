#include<iostream>
#include<string>
using namespace std;

void changedValue(int a){
    a = 20;
    cout<<a<<endl;
}


void changedReference(int *a){
    *a=20;
    cout<<"Value inside function :"<<*a<<endl;
    
   
}


void changedReferenceusingreference(int &a){
    a=21;
    cout<<"Value inside function :"<<a<<endl;
    
   
}

int main(){
    // int a = 10;
    // int *ptr = &a;
    // cout<<ptr<<" = " <<&a<<endl;
    // cout<<sizeof(ptr)<<" = "<<sizeof(&a)<<endl;
    // cout<<endl;




    // float pi = 3.14;
    // float * piptr = &pi;
    // cout<<piptr<<" = "<<&pi<<endl;
    // cout<<sizeof(piptr)<<" = "<<sizeof(&pi)<<endl;
    // cout<<endl;

/*Dereference using astrik symbol*/

    // string name = "Shriniwas";
    // string* ptr = &name;
    // string **ptrr = &ptr;
    // cout<<*ptr<<endl;
    // cout<<**ptrr<<endl;
    // cout<<&ptrr<<endl;

    // cout<<endl;

    // *ptr = "Mourya";
    // cout<<*ptr<<endl;
    // cout<<**ptrr<<endl;
    // cout<<&ptrr<<endl;


/*NUll Pointer*/

// int *ptr = NULL;         //output 0...

// cout<<*ptr<<endl;        //Segmentation fault error kiuki null pointer ki koi value he nhi hai isliye kbi esa nhi krna chahiye....

// cout<<"code chl rha kya:"<<endl;     //never run this code bcoz in above line give segmentato fault error


/*PASSING ARGUMENT IMP*/

// int a = 10;
// cout<<"Original Value :"<<a<<endl;
// changedValue(a);
// cout<<"Value after call by value :"<<a<<endl;

// cout<<endl;

// changedReference(&a);
// cout<<"Value after call by Reference :"<<a<<endl;




/*Reference Variables ......*/

int a = 5;
int *b = &a;
*b=29;
changedReferenceusingreference(a);
cout<<a<<"\t"<<a<<endl;

    return 0;
}
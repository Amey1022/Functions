/ Online c++ pointers
#include <iostream>
using namespace std;
void swap(int x,int y)

 {
     int temp;
     temp=x;
     x=y;
     y=temp;
     
}
int main(){
    int a=5,b=2;
    swap(a,b);
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    return 0;
}
/*value of a is 5
value of b is 2


=== Code Execution Successful ===/*

#include <iostream>
using namespace std;


int sumFunc(int x,int y, int z){return x+y+z;}

int main(void ){
    //declare and initialize
    int x,y,z,sum=0;
    // input code
    cin>>x>>y>>z;
    // print x,y,z
    cout<<x<<" "<<y<<" "<<z;
    //calc sum
    sum=sumFunc(x,y,z);
    // //print sum
    cout<<"Sum of x and y and z is "<<sum;
    return 0;
}
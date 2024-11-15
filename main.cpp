#include <iostream>
using namespace std;


int sumFunc(int x,int y, int z){return x+y+z;}

int main(void ){
    int x,y,z,sum=0;
    
    cin>>x>>y>>z;
    
    cout<<x<<" "<<y<<" "<<z;
    sum=sumFunc(x,y,z);

    cout<<"Sum of x and y and z is "<<sum;
    return 0;
}
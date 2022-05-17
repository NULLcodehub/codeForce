#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int c=0;
    
    cin>>a>>b;
    
    
    do{
        
        a=a*3;
        b=b*2;
        c=c+1;
        
    }while(a<=b);
    
    cout<<c;
    return 0;
}
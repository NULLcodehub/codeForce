#include<iostream>
using namespace std;
int main()
{
    long long n,a=0,b=0;
    cin>>n;
    
    if(n%2==0){
        a=n/2;
        cout<<a;
    }else{
        b=-((n/2)+1);
        cout<<b;
    }
    return 0;
}
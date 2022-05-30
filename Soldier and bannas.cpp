#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int k=0;
    long int w;
    int n,m=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;++i){
        m=m+(i*k);
    }
    m=m-n;
    if(m>0){
        cout<<m;
    }else{
        cout<<0;
    }

    return 0;
}

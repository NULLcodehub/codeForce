#include<iostream>
using namespace std;

int main()
{
    int n=0,c=0;
    cin>>n;
    string s="";
    cin>>s;
    
    for(int i=0;i<n;++i){
        if(s[i]==s[i+1]){
            c=c+1;
        }
    }
    cout<<c;
    
    return 0;    
}
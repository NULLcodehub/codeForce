#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string a="";
    string b="";
    bool t=true;
    cin>>a;
    cin>>b;
    
    for(int i=0;i<a.length();++i){
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    for(int i=0;i<a.length();++i){
        if(a[i]<b[i]){
            t=true;
            break;
        }
        if(a[i]>b[i]){
            t=false;
            break;
        }
    }
    if(a==b){
        cout<<"0";
    }else{
        if(t){
            cout<<"-1";
        }else{
            cout<<"1";
        }
    }
    return 0;
}
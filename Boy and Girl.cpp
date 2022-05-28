#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int main()
{
    string s="";
    int c=0,j=0;

    cin>>s;
    sort(s.begin(),s.end());

    for(int i=0;i<s.length();++i){
        if(s[i]!=s[i+1]){
            c++;
        }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}

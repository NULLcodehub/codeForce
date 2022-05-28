#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[100];
    int c=0;
    string s="";
    cin>>s;
    //seperatig '+' from the sting and storing number string in an array
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '+'){
            continue;
        }else{
            a[c]=s[i]-'0';
            c++;
        }
    }

    sort(a,a+c);
    
    for (int i = 0; i <c; i++)
    {
        cout<<a[i];
        if(i== c-1){
            break;
        }
        cout<<"+";
    }
    
    return 0;
}
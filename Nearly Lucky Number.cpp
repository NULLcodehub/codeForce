#include <iostream>
using namespace std;
int main() {
    int n;
    int a,c=0;
    cin>>n;
    while(n!=0){
        a=n%10;
        n=n/10;
        if(a==7 || a==4){
            c++;
            
        }
    }
    if(c==4 || c==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}
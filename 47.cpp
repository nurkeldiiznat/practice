#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
        cout<<a;
    else if(b>=c && b>=a)
        cout<<b;
    else if(c>=b && c>=a)
        cout<<c;
}

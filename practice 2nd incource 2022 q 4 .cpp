#include<iostream>
using namespace std ;
int main()
{
    int s ,n,i,a=0,b=1 ;

    cin>>n;
    cout<<"the fibonacci number "<<endl ;
    for(int i=0 ; i<=n ; i++)
    {
        cout<<a<<endl ;
        s=a+b ;
        a=b;
        b=s;


    }
    return 0 ;
}

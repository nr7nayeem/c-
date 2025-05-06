#include<iostream>
using namespace std ;
int main()
{
    int roll [5] ,marks[5] ;
    for (int i=0 ; i<=4;i++)
    {
        cin>>roll[i]  ;
        cin>>marks[i] ;
        cout<< endl ;
    }
   int maxmarks=marks[0] ;
   int minmarks=marks[0] ;
   int maxroll=roll[0] ;
  int  minroll=roll[0] ;

    for(int i=0 ; i<=4; i++)
    {
        if(maxmarks<marks[i])
        {
            maxmarks=marks[i] ;
            maxroll=roll[i] ;

        }
    }
    cout<<maxroll<<"  is " << maxmarks<<endl ;
}

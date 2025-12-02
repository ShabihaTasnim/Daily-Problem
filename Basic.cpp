//#include <iostream >
#include <bits/stdc++.h> // all libraby
using  namespace std ;
struct person // cls er repalcement
{
    string name;
    int date ;
    int month ;
    int year;
};

int main ()
{
    // std :: cin >> if using na likhi , operator ovrlodding
    /* int a ;
      cin>>a;
      cout<<"The output is: \n"<<a<<endl;*/
    person p [100];
    for (int i=0; i<100/i++)
    {
        cin>>p[i].name>>p[i].date>>p[i].month>>p[i].year;
    }
    for (int i=0; i<100/i++)
    {
        cout<<p[i].name p[i]<<p[i].date<<p[i].month<<p[i].year;
        cout<<" Name of the person is :" <<p[i].name<<endl;
        cout<<" Date of the person is :" <<p[i].date>>p[i].month>>p[i].year<<endl;
    }

    //  person P1 ; // structure er object
    //cin>>P1.name >>P1.date>>P1.month>>P1.year ; // . operator for accessing
    //  cout<<" Name of the person is :" <<P1.name<<endl;
    // cout<<" Date of the person is :" <<P1.date<<P1.month<<P1.year <<endl;
    // cout<<" Month of the person is :" <<P1.month<<endl;

    return 0;
}

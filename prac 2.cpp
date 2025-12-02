#include <bits/stdc++.h> // all libraby
using  namespace std ;
class person // public private declare,, by default private hoye jai ,,cls declare
{
private :
    string name;
public :
    int date;
    int month;
    int year;
    void getter (string s, int d, int m, int y ) // private kichu acces er jnno function lage here getter fucntion ,, private variable main thke dirct accs hoy na
    { name =s;
    date=d;
    month=m;
    year=y;

    }
    void print ()
    {  cout<<" Name of the person is :" <<name<<endl;
        cout<<" Date of the person is :" <<date<<month<<year<<endl;

    }
};
int main ()
{

    person p ;
    p.getter ("Tasnim",2,1,2003) ;
   }

#include <bits/stdc++.h>
using  namespace std ;
struct person
{
    string name;
    int date ;
    int month ;
    int year;
};

int main ()
{
   // vector<person>v;
    vector<int> V1;

    V1.push_back(80);
    V1.push_back(50);
    V1.push_back(100);
    V1.push_back(10);
    V1.push_back(40);
    V1.push_back(89);
    V1.push_back(11);
    V1.size();
    cout<<V1.size() <<endl;;
    cout<<V1.front () <<endl;
    cout<<V1.back () <<endl;
    cout<<V1.at(0)<<endl; // 0 indx's
    V1.pop_back() ;
    cout<<V1.back()<<endl;
    for (int i =0;i< V1.size();i++)
    {
        cout<<V1[i]<< " " ;    }
    V1.erase(V1.begin()+3);
    cout<<endl;
     for (int i =0;i< V1.size();i++)
    {
        cout<<V1[i]<< " " ; }
}

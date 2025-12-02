#include <bits/stdc++.h>
using namespace std ;

int coutEven (vector <int> &vec, int left, int right )
{
    // base case : only one element in vector , check if it is even or not
    if (left==right)
    {
     // if (vec[left]%2==0)
           // return 1;
     // else
          //return 0;
          return vec[left]; // for all sum
    }
    // Divide the prob into subprob by finding the mid value
    int mid= left+(right-left)/2;
    // conquer the sub recursively
    int leftresult= coutEven(vec,left,mid);
    int rightresult = coutEven (vec,mid+1,right );

    // Combine
    return leftresult + rightresult ;
}
int main ()
{
    int n ;
    cout <<"Enter the size of vector  "<<endl;
    cin>>n;
    vector <int>v(n);
    cout<<"Enter the elements of vector "<<endl;
    for ( int i =0; i <n; i++)
    {
        cin>>v[i];

    }
    int ans =coutEven(v,0,n-1);
   // cout<<"Number of the even elements in the vector :"<<ans<<endl;
    cout<<"Sum of the  elements in the vector"<<ans <<endl;
    return 0 ;
}

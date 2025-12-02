#include <iostream>
using namespace std;
 int main(){

 int arr[]={2,5,11,9,3,7,-1,4,0,15};

 int sizeArr = sizeof(arr) / sizeof(arr[0]);
 cout << sizeArr <<"\n";
 for (int i =0; i<sizeArr;i++){

    for(int j =0;j<sizeArr-1-i;j++){

        if ( arr[j] > arr[j+1] ){

            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
       }
    }
 }
 for (int i= 0; i < sizeArr; i++)
        cout << arr[i]<<" ";

  return 0;

 }


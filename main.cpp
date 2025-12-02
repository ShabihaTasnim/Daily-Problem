#include <bits/stdc++.h>

using namespace std;

struct mypair{
    int myMax;
    int myMin;
};

mypair findMinMax(int arr[], int l, int r){
    mypair x;
    if (l == r){
        x.myMax = arr[l];
        x.myMin = arr[l];
    }
    else if (l == r-1){
        if (arr[l] < arr[r]){
            x.myMax = arr[r];
            x.myMin = arr[l];
        }else{
            x.myMax = arr[l];
            x.myMin = arr[r];
        }
    }
    else{
        int mid = (l+r)/2;
        mypair left = findMinMax(arr, l, mid);
        mypair right = findMinMax(arr, mid+1, r);

        x.myMax = max(left.myMax, right.myMax);
        x.myMin = min(left.myMin, right.myMin);
    }
    return x;

}



/*
int findMyMax(int arr[], int l, int r){
    if (l == r){
        return arr[l];
    }else if ( l == r - 1){
        return (arr[l] > arr[r])? arr[l]:arr[r];
    }else{
        int mid = (l+r)/2;

        int left_max = findMyMax(arr, l, mid);    // T(n/2)
        int right_max = findMyMax(arr, mid+1, r); // T(n/2)

        return (left_max>right_max)? left_max:right_max;

    }
}
*/

/*
int main()
{
    int arr[] = {11, 3, -1,2,3,20};

    int n = sizeof(arr) / sizeof (arr[0]);

    mypair x = findMinMax(arr, 0, n-1);

    cout << "min is " << x.myMin << " max is " << x.myMax << endl;

    return 0;
}
*/

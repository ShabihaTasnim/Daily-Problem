#include <bits/stdc++.h>

using namespace std;

int crossSubArray(int arr[], int mid, int l, int r){
    int left_sum = INT_MIN;
    int right_sum = INT_MIN;
    int sum = 0;
    for (int i = mid; i>=l; i -- ){
        sum = sum+arr[i];
        if (sum > left_sum){
            left_sum = sum;
        }
    }
    sum = 0;
    for (int i = mid+1; i<=r; i ++ ){
        sum = sum+arr[i];
        if (sum > right_sum){
            right_sum = sum;
        }
    }
    return left_sum+right_sum;

}



int maxSubArray(int arr[], int l, int r){

    if (l == r){
        return arr[l];
    }else{

        int mid = (l+r) / 2;
        int left = maxSubArray(arr, l, mid);
        int right = maxSubArray(arr, mid+1, r);
        int cross = crossSubArray(arr, mid, l, r);


        if (left >= right && left >= cross)
            return left;
        else if (right >= left && right >= cross)
            return right;
        else
            return cross;
    }

}

int main(){

    int arr[] = {-3,-1,2,4,-2,2};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSubArray(arr, 0, n-1);

    return 0;
}

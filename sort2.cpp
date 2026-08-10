#include<iostream>
using namespace std;
void sort(int arr[],int size){ //simple solution using the two pointers approach
    int left=0;
    int right=size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right==1] && left <right){
            right--;

        }
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
    }
}
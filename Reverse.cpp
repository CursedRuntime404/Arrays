#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
   int start=0;
   int end=size-1;
   while(start<end){
swap(arr[start],arr[end]);
       start++;
       end--;
   }

       
    }


void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[5]={5,10,2,10,7};
    int brr[6]={1,2,7,10,5,8};

    reverse(arr,5);
    reverse(brr,6);

    print(arr,5);
    print(brr,6);
    
}

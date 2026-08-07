#include<iostream>
using namespace std;
int getMax(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
}
return maxi;
}
int getMin(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
}
return mini;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"maximumElement"<<getMax(arr,size)<<endl;
    cout<<"minimumElement"<<getMin(arr,size)<<endl;
}

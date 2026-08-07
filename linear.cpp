//TO learn linear search using functions to further impleent it into recursion
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            
            return 1;
        }
    }
    
    return 0;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
   for(int i=0;i<size;i++){
        cin>>arr[i];
   }
         int key;
    cin>>key;
    bool found = LinearSearch(arr,size,key);
    if(found){
        cout<<"the element is found"<<endl;
    }
    else{
        cout<<"the element is not found"<<endl;
    }
    
}
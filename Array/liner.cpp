#include<iostream>
using namespace std;

bool search(int arr[],int size,int  key){

    for(int i = 0; i<size; i++){
      if(arr[i]==key){
          return 1;
      }
    }
    return 0;

}

int main()
{
    int arr[10]={10,34,23,3,1,24,42,2,12,43};
    int key;
    cout<<"Enter the key";
    cin>>key;

    //weather 1 is prestent is or not

    bool found = search(arr,10,key);
    
    if(found){
      cout<<"Key is Present";
    }else{
      cout<<"Key is not Present";
    }

    return 0;
}
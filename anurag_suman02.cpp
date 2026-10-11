// ##################### Find the Target (Linear Search) #######################
#include <iostream>
using namespace std;
int main(){
    
//input array-->
    int sz;
    cout<<"enter size of arrray : ";
    cin>>sz;

    cout<<"enter elements of array : ";
    int arr[sz];
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }


//ckecking target value -->
    int target;
    cout<<"enter target value : "<<endl;
    cin>>target;

    bool flag = false;

    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            flag=true;
            break;
        }
    }
    if(flag ==true){
        cout<<"Target value is PRESENT.";
    }
    else{
        cout<<"Target value is NOT PRESENT.";
    }

    return 0;
}
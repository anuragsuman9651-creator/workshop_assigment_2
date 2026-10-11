//###################### Count Target Occurrences ###############################


#include <iostream>
using namespace std;
int main(){

//input array
    int sz;
    cout<<"enter size of arrray : ";
    cin>>sz;


    int arr[sz];
    cout<<"enter elements of array : "<<endl;
    for (int i = 0; i<sz; i++) {
        cin >> arr[i];
    }

//count target occurances
    int target;
    cout<<"enter target value : ";
    cin>>target;

    int count =0;
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            count++;
        }
    }

    if(count==0){
        cout<<"target is not PRESENT";
    }
    else{
        cout<<"number of occurances of target is : "<<count;
    }
    return 0;
}
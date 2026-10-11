// ############################# FINDING MAXIMUM OF NUMBERS ########################


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


//finding max. number -->
    int max =INT_MIN;
    int index=0;
    for(int i=0;i<sz;i++){
        if(max < arr[i]){
            max=arr[i];
            index=i;
        }
    }
    cout<<"element at index "<<index << ", that is "<<max<<", is maximum.";

    return 0;

}
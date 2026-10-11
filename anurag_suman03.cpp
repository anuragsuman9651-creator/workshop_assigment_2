//##################### TOTAL NUMBER OF EVEN NUMBERS IN ARRAY #########################


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

//counting  even numbers -->
    int count=0;
    for(int i=0;i<sz;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"number of even numbers in array : "<<count;
    return 0;
}
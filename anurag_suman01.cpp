// #################### Sum of Array Elements ####################



#include <iostream>
using namespace std;
int main(){
//input array -->
    int sz;
    cout<<"enter size of arrray : ";
    cin>>sz;

    cout<<"enter elements of array : "<<endl;
    int arr[sz];
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }
//calculating sum -->
    int sum=0;
    for (int i = 0; i < sz; i++) {
        sum+=arr[i];
    }
    cout<<"sum of elements : "<<sum<<endl;
    return 0;
}
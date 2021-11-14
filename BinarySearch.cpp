#include <iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int x)
{
    while ( left<= right){
        int mid = left +(right - left)/ 2; 

        if (arr[mid] == x){
            return mid;
        }
        else if (arr[mid] < x) {
            return binarysearch(arr, mid + 1, right ,x);
        }
        else {
            return binarysearch(arr, left, mid -1,x);
        }
    } 
    return -1;
}

int main(){
    int myarr[5];
    int num;
    int output;

    cout<<"please enter 5 elements in Ascending order"<<endl;
    for (int i= 0; i<5; i++){
        cin>> myarr[i];
    }

    cout<<"Please enter an element to search"<<endl;
    cin>>num;

    output = binarysearch(myarr,0,4,num);
    if (output==-1){
        cout<<"missing";
    }
    else{
        cout<<"present at "<<output + 1;
    }
    

}
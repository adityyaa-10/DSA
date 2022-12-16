#include <iostream>
using namespace std;

 
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while (start <= end){
        if(arr[mid] == key){
            return mid;
        }
        
        if(arr[mid]<key){    
            start = mid + 1;   //Moving towards right portion of array 
        }
        else{
            end = mid - 1;   //Moving towards left portion of array
        }
        mid = (start+end)/2; //Updating value of mid in order to operate in the next half portion
    }
    return -1 ;
}

int main(){
    int even [6] = {2,4,8,12,16,18};
    int odd[5] = {3,5,7,11,19};
    
    int evenSearch = binarySearch(even, 6, 16 );
    
    cout<<"The index of 12 is : "<<evenSearch<<endl;
    
    int oddSearch = binarySearch(odd, 5, 19);
    
    cout<<"The index of 7 is : "<<oddSearch<<endl;

    return 0;
}
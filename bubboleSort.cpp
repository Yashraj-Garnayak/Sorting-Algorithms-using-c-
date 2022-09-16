#include<iostream>
using namespace std;

// create a swap function which will swap the two elemtnts 
// this swap function will take two pointer as an argument
void swap(int *big, int *small){
    // create a temp variable to temporaryly store the address of the small element 
    int temp = *small;
    // then assine the *small = *big
    *small = *big;
    // now store the temp value in *big
    *big = temp;
}
// create a functin called bubboleSort()
// which will take the array and the size of array as argument
void bubboleSort(int a[], int n){
    // now create a for loop which will itterate through the elements present in the array
    for (int i = 0 ; i < n ; i++){
        // now create a for loop which will start from i 
        for(int j = 0 ; j < n - i - 1; j++ ){
        //then inside it apply a if statement the if the adjusent element are not in a sorting order
        // then call the swap() function and change the places of the elements
        if(a[j]>a[j+1]){
            swap( &a[j] , &a[j+1] );
        }
        } 
    }
}

int main(){
    // create an int array 
    int arr[5] = {64, 25, 12, 22, 11};
    // now find the size of the array by sizeof function
    /* but with sizeof array it will provide the total number of bytes taken by the array So 
    You have to devide the total value by the number of bytes taken by one element in the array*/
    int n = sizeof(arr)/sizeof(arr[0]);
    // now call the selesctionSort() function and pass the argument array and the size of array
    bubboleSort(arr, n);
    // now its time to print my array
    cout << "The sorted array is: " << endl;
    // use a for loop to print your array
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
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


// create a fuction called selectionSort
// which will take the array and the size of the array as argument
void selectionSort(int a[],int n){
    // create a variable which will store the minimum index
    int min_idx,i,j;
    // now create a for loop to itterate through the array elements
    for ( i = 0 ; i < n ; i++){
        // now make the minimum index as the itterating element
        min_idx = i;
        // crete a for loop and change the minimum index value by comparing it with other elements
        for (j = i + 1 ; j < n  ; j++){
            // check if the element at any index is smallre then the element present at the index i
            if (a[min_idx]>a[j]){
                // change the the min_idx to j
                min_idx = j;
            }
            
            
        }
        // now check if the minimum index is same as i or not then change
        if(min_idx != i){
                // now call the function and give the address as argument in the paramiters
                swap (&a[min_idx],&a[i]);
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
    selectionSort(arr, n);
    // now its time to print my array
    cout << "The sorted array is: " << endl;
    // use a for loop to print your array
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
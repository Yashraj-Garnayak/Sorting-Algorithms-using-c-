#include<iostream>
#include<vector>
using namespace std;




// create a function called incertionSort()
// which will teke paramiter the array and the length of the arrray
void incetrionSort(int a[],int n){
    // here we have to use a for loop to itterate therough the array from the first index
    for (int i = 1; i<n; i++){
        // create a value temp which will store the of the number we want to arrange in the array
        int temp = a[i];
        // here create a new variable with the help of which you will check the vlaues which are present before the selected element
        int j = i-1;
        // now first check if the second variable which we are going to use as indexes so it should not be less then 0
        // then check if the temp element is less than the current element if so then copy the a[j] element to the elemrnt i.e. a[j+1]
        // then continue the process
        while (j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        // after the loop we will store the temp value in your a[j+1] element
        a[j+1] = temp;
    }
}

int main(){
    // create an int array 
    int arr[5] = {64, 25, 12, 22, 11};
    int *result;
    // now find the size of the array by sizeof function
    /* but with sizeof array it will provide the total number of bytes taken by the array So 
    You have to devide the total value by the number of bytes taken by one element in the array*/
    int n = sizeof(arr)/sizeof(arr[0]);
    // now call the selesctionSort() function and pass the argument array and the size of array
    incetrionSort(arr, n);
    // now its time to print my array
    cout << "The sorted array is: " << endl;
    // use a for loop to print your array
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
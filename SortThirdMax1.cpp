/*
Carl Christian G. Tilid BSCS II CSC124
First Solution Third Max
Find the third highest number in an array using Bubble sort to sort the array in descending order
*/

#include <iostream>
using namespace std;

int main(){

    //Initialize array and get the len of arr
    int arr[] = {3, 4, 2, 6, 7, 1, 8, 0, 9, 5};
    int arrlen = sizeof(arr)/sizeof(arr[0]);

    //Display array before sorting
    for(int i=0; i<arrlen; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Using Bubble sort algorithm to sort the array
    for(int i=0; i<arrlen-1; i++){
        for(int j=0; j<arrlen-i-1; j++){
            if (arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]); //Swap the 2 values if first value is less than second
            }  
        }
    }

    //Display Array after Sorting
    for(int i=0; i<arrlen; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Display Third max
    cout << "The third maximum value in the array is " << arr[2] << endl;
    return 0;
}

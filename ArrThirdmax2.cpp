/*
Carl Christian G. Tilid BSCS II CSC124
Second Solution Third Max
Find the third highest number in an array by making/copying a new array
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

    //Copy array section
    int copyarr[3];     //Copied array contains only 3 since we just need to find the 3rd max
    int max;            //Saved maximum value    
    for(int i=0; i<3; i++){     //Copying the maximum values from the original arr 
        
        max = arr[i];   //Initial max value to compare
        for(int j=i+1; j<arrlen-1; j++){    
            if (arr[j]>max){    //Comparing values to find the maximum value
                max = arr[j];   
                swap(arr[i], arr[j]);   /*Swap the indexes of the max value to the inital max value
                                         to avoid duplication/comparing again*/
            } 
        }
        copyarr[i] = max;   //Copy the value to the new(copied) arr
    }

    //Display Copied Array
    for(int i=0; i<3; i++){
        cout << copyarr[i] << " ";
    }
    cout << endl;

    //Display Third max
    cout << "The third maximum value in the array is " << copyarr[2] << endl;
    return 0;
}
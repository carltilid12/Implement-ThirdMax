/*
Carl Christian G. Tilid BSCS II CSC124
Thrid Solution Third Max
Find the third highest number in an array by comparing values simultaneously 
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

    //Comparing 3 values from the array alternatingly
    int max[3] = {arr[0], arr[1], arr[2]};  //Initialize default 3 max values
    for(int i = 3; i<arrlen; i++){
        if(max[i%3]<arr[i]){    //Using modulo to alternately compare the 3 max values 
            max[i%3] = arr[i];  //Assign value to max if its greater than current max
        }
    }

    
    /*Comparing the 3 max values against the each other and get min value
    if((max[0]<=max[1]) && (max[0]<=max[2])){
        swap(max[0], max[2]);   //Swap the lowest value to the 3rd index
    }
    else if ((max[1]<=max[0]) && (max[1]<=max[2])){
        swap(max[1], max[2]);   
    }
    else if ((max[2]<=max[0]) && (max[2]<=max[1])){
        //Do nothing
    }
    */

   //Get Minimum value of the max 3 since it is the third max
    int min = max[0];   //Initalizing min as the default value
    for(int i=1; i<3; i++){
        if (min>max[i]){
            min = max[i]; //Update min value
        }
    }

    //Display The 3 Max values
    for(int i=0; i<3; i++){
        cout << max[i] << " ";
    }
    cout << endl;

    //Display Third max
    cout << "The third maximum value in the array is " << min << endl;
    return 0;
}
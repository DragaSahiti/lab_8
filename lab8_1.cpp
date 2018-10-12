/*1.Write a program to find sum of all elements of an array. (Use functions)*/

//library
# include <iostream>
using namespace std;

//function to sum all values in the array
int *sum(int arr[]){
    int sum = 0;
    for (int i=0;i<7;i++){
    arr[i] = i+1;
    sum = sum + arr[i];
    }
    cout << sum <<endl;

    return arr;
}

//main function
int main(){
//array of integers of size 7 and assign values to it
int arr[7];
//call function
int *p = sum(arr);
for (int i=0;i<7;i++)
    
    return 0;
}

/*Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)*/

//library
# include <iostream>
using namespace std;

//function to find the largest of all the elements of array
int *lar(int arr[]){
    int lar = arr[0];
    //loop
    for(int i=0;i<4;i++){
    //condition
    if(lar<arr[i]){
    lar = arr[i];
    }
    }
    cout <<"the largest element is "<< lar << endl;
    return arr;  
}
//function to find the smallest of all the elements of array
int *sma(int arr[]){
    int sma = arr[0];
    //loop
    for(int i=0;i<4;i++)
    //condition
    if(sma>arr[i]){
    sma = arr[i];
    }
    cout <<"the smallest element is "<< sma << endl;
    return arr;   
}
//funtction to find the mean of all elements in array
int *mean(int arr[]){
    int sum = 0;
    //loop
    for(int i=0;i<4;i++){
    sum = sum + arr[i];
    }
    int mean = sum/4;
    cout << sum << endl;
    cout <<"the mean of the elements of the array is "<< mean <<endl;
    return arr;
}
//function to find the median
int *median(int arr[]){
      for(int i=0;i<4;i++){
      int sum2 = arr[1]+arr[2];
      int median = sum2/2;
      }
      cout <<"the median of the array is "<< median << endl;
      return arr;
}
//main function
int main(){
    //declare array size
    int arr[4] = {7,3,5,1};
    //call function to print the largest element
    int *p = lar(arr);
    for(int i=0;i<4;i++);
    //call function to print the smallest number
    int *q = sma(arr);
    //call afunction to print the mean
    int *r = mean(arr);
    //call a function to print the median
    int *s = median(arr);
   

    return 0;
}



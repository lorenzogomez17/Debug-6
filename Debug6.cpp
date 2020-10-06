#include <iostream>
#include <array>
#include <string>
using namespace std;

/*
This program is meant to take an array and put it into order
It does this by moving along the array from "left-to-right"
and taking the largest element that it can find with it. by
doing so it can make sure that it has moved the largest 
element to the right. It does this repeatedly until the array
has been sorted. It also includes a portion of code that is
meant to check if the code is actually in order.
*/

// Array that needs sorting
int arr[] = {20,12,65,45,98,65,85,12,54,78,55,13,50,19,84,20,43,10};
int arrSize =  sizeof(arr)/sizeof(arr[0]);
int main() {

  //Bit of code for sorting
  for (unsigned j=arrSize;j>0;j--){
    for (unsigned i=1;i<j;i++){
      if (arr[i-1]>arr[i]){
        arr[i-1] = arr[i];
        arr[i] = arr[i-1];
        }
    }
  }

  // Bit of code to check if sort worked
  // HINT : This bit of code is just fine
  bool checkFlag = true;
  for (unsigned i=1;i<arrSize;i++){
    if (arr[i]<arr[i-1]){checkFlag = false;}
  }
  if (checkFlag) {cout << "Sorted properly";}
  else {cout << "Not sorted properly";}
  cout << endl << arr[0];
  for (unsigned i=1;i<arrSize;i++){
    cout << ", " << arr[i];
  }
  
  return 0;
}

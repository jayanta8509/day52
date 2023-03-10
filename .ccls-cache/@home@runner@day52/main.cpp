// Given an integer array of size N, write a program to reverse the array;
#include <iostream>
using namespace std;
void reverse(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int main() {
  int arr[] = {1, 5, 7, 5, 3};
  int size = 5;

  // for(int i=0;i<size;i++){
  //   cin>>arr[i];
  // }
  reverse(arr, size);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
}
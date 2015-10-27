#include <iostream>

using namespace std;

void sort_array(int array[], int array_length);
void print_array(int array[], int array_length);

int main() {
  int array[] = {2,6,8,3,5,1,4,9,13, 19, 23};
  int array_length = sizeof(array)/sizeof(array[0]); //sizeof() gave us size of array in byte.
  
  sort_array(array, array_length);
  print_array(array, array_length);

  return 0;
}

void sort_array(int array[], int array_length) {
  for(int i = 0; i < (array_length - 1); i++) {
    for(int j = (i+1); j < array_length; j++) {

      if(array[i] > array[j])
        swap(array[i], array[j]);
    }
  }
}

void print_array(int array[], int array_length) {
  for (int i = 0; i < array_length; i++ )   
    cout<<array[i]<<" ";
}

//Big O for selection sort is O(N^2)

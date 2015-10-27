#include <iostream>

using namespace std;

void sort_array(int array[], int array_length);
void print_array(int array[], int array_length);

int main() {
  int array[] = {2,1,6,3,9,5};
  int array_length = sizeof(array)/sizeof(array[0]); //sizeof() gave us total size of array in byte.
  
  sort_array(array, array_length);
  print_array(array, array_length);

  return 0;
}

void sort_array(int array[], int array_length) {

  bool swapped = true;
  int number_of_iterations = 0;

  while (swapped) {
    swapped = false;
    number_of_iterations++;

    for (int i = 0; i < (array_length - number_of_iterations); i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        swapped = true;
      }
    }
  }

}

void print_array(int array[], int array_length) {
  for (int i = 0; i < array_length; i++ )   
    cout<<array[i]<<" ";
}

//Big O for bubble sort is O(N^2)

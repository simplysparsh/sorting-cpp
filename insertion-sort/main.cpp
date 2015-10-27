#include <iostream>

using namespace std;
void insertion_sort(int array[], int array_length);
void print(int array[], int array_length);

int main() {

  int A[]= {5,4,3,2,1};
  int length = (sizeof(A)/4);

  insertion_sort(A, length);
  print(A, length);

  return 0;
}

void insertion_sort(int array[], int array_length) {
  int temp = 0;
  int temp_index;

  for (int i = 1; i < array_length; i++) {
    temp = array[i];
    temp_index = i;

    while (temp_index > 0 && temp < array[temp_index - 1]) {
        array[temp_index] = array[temp_index - 1];
        temp_index--;
    }
    array[temp_index] = temp;

  }
}

void print(int array[], int array_length){
  for (int i = 0; i < array_length; i++ )
    cout<<array[i]<<" ";
}

//Big O: O(N^2) but in practical cases, it's better than bubble and selection sort.

#include <iostream>

using namespace std;
void merge_sort(int array[], int array_length);
void merge(int array_left[], int array_right[], int array[], int length_left, int length_right);
void print(int array[], int array_length);

int main() {

  int A[]= {4, 2, 8, 6, 3};
  int array_length = sizeof(A)/sizeof(A[0]);


  merge_sort(A, array_length);
  print(A, array_length);

  return 0;
}



void merge_sort(int array[], int array_length) {

  if (array_length < 2)
    return;

  else {

    int array_mid = array_length/2;
    int array_left[array_mid];
    int array_right[array_length - array_mid];

    for (int i = 0; i < array_mid; i++) {
      array_left[i] = array[i];
    }

    for (int i = array_mid; i < array_length; i++) {
      array_right[i - array_mid] = array[i];
    }

    merge_sort(array_left, sizeof(array_left)/4);
    merge_sort(array_right, sizeof(array_right)/4);
    merge(array_left, array_right, array, array_mid, (array_length - array_mid) );

  }

}

void merge(int array_left[], int array_right[], int array[], int length_left, int length_right) {

  int i = 0; //array_left position counter
  int j = 0; //array_right position counter
  int k = 0; //main array position counter

  while(i < length_left && j < length_right) {
    if(array_left[i]  < array_right[j]) {
      array[k] = array_left[i];
      i++;
    }
    else {
      array[k] = array_right[j];
      j++;
    }
    k++;
  }

  while(i < length_left) {
    array[k] = array_left[i];
    i++;
    k++;
  }

  while(j < length_right) {
    array[k] = array_right[j];
    j++;
    k++;
  }
}

void print(int array[], int array_length) {

  for (int i = 0; i < array_length; i++ )
    cout<<array[i]<<" ";
}

//Big O: O(NlogN)

#include <stdio.h>

int main() {
  int arr[5] = {12, 56, 34, 78, 100};
  int largest = arr[0];  // initialize the largest variable with the first element of the array
  
  for (int i = 1; i < 5; i++) {
    if (arr[i] > largest) {
      largest = arr[i];  // update the largest variable if a larger element is found
    }
  }
  
  printf("The largest element in the array is: %d", largest);
  
  return 0;
}

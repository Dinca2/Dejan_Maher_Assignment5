#include "Sorting.h"

Sorting::Sorting(){
  comparisons = 0;
}

void Sorting::Selection(int table[], int maxIndex) {
  int current = table[0];
  int indexOfMin = 0;
  int temp = 0;

  for(int i = 0; i < maxIndex; i++) {
    indexOfMin = i;
    for(int j = i + 1; j < maxIndex; j++) {
      if(table[j] < table[indexOfMin]) {
	indexOfMin = j;
      }
      comparisons++;
    }
    swap(table[indexOfMin], table[i]);
  }
}

void Sorting::Merge(int table[]) {
  
}
  
void Sorting::Heap(int table[]) {

}
  
void Sorting::QuickFP(int table[], int first, int last) {

}
  
void Sorting::QuickRP(int table[], int first, int last) {

}
  
void Sorting::Split(int table[], int first, int last) {

}

void Sorting::Swap(int *x, int *y) {
  int temp = *x; 
  *x = *y; 
  *y = temp; 
}

int Sorting::GetComparisons() {
  return comparisons;
}

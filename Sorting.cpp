#include "Sorting.h"

Sorting::Sorting(){
  comparisons = 0;
}

void Sorting::Selection(int table[], int maxIndex) {
  int current = table[0];
  int indexOfMin = 0;
  int temp = 0;

  for(int i = 0; i < maxIndex - 1; i++) {
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

void Sorting::Mergesort(int table[], int left, int right) {
  if(left >= right) {
    return;
  }
  int mid = (left + (right - left) /2);
  Mergesort(table, left, mid);
  Mergesort(table, (mid + 1), right);
  Merge(table, left, right);
  
}

void Sorting::Merge(int table[], int left, int right) {
  int mid = (left + (right - left) /2);
  int leftMax = mid - left + 1,
    rightMax = right - mid;

  cout << "left  : " << leftMax << endl;
  cout << "right : " << rightMax << endl;
  int *tableA = new int[leftMax], //left array
    *tableB = new int[rightMax]; //right array

  for(int a = 0; a < leftMax; a++) { //initializes array
    tableA[a] = table[left + a];
  }

  for(int b = 0; b < rightMax; b++) {
    tableB[b] = table[mid + 1 + b];
  }

  int indexA = 0,
    indexB = 0,
    indexT = left;
  while(indexA < leftMax  && indexB < rightMax) {
    if(tableA[indexA] <= tableB[indexB]) {
      table[indexT] = tableA[indexA];
      indexA++;
    } else {
      table[indexT] = tableB[indexB];
      indexB++;
    }
    comparisons++;
    indexT++;
  }

  while(indexA < leftMax) {
    table[indexT] = tableA[indexA];
    indexA++;
    indexT++;
  }

  while(indexB < rightMax) {
    table[indexT] = tableB[indexB];
    indexB++;
    indexT++;
  }

}

// main function to do heap sort
void Sorting::Heapsort(int table[], int maxIndex) {
    // Build heap (rearrange array)
    for (int i = maxIndex / 2 - 1; i >= 0; i--)
        Heap(table, maxIndex, i);
 
    // One by one extract an element from heap
    for (int i = maxIndex - 1; i > 0; i--) {
        // Move current root to end
        swap(table[0], table[i]);
	
        // call max heapify on the reduced heap
        Heap(table, i, 0);
    }
}
 
void Sorting::Heap(int table[], int maxIndex, int subIndex) {
    int largest = subIndex; // Initialize largest as root
    int l = 2 * subIndex + 1; // left = 2*i + 1
    int r = 2 * subIndex + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < maxIndex && table[l] > table[largest]) {
        largest = l;
	comparisons++;
    }
    // If right child is larger than largest so far
    if (r < maxIndex && table[r] > table[largest]) {
        largest = r;
	comparisons++;
    }
    // If largest is not root
    if (largest != subIndex) {
        swap(table[subIndex], table[largest]);
	comparisons++;
        // Recursively heapify the affected sub-tree
        Heap(table, maxIndex, largest);
    }
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

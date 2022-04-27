#ifndef Sorting_h
#define Sorting_h

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Sorting {
private:
  int comparisons;
  bool fp;
public:
  Sorting();
  void Selection(int table[], int maxIndex);
  void Mergesort(int table[], int left, int right);
  void Merge(int table[], int left, int right);
  void Heapsort(int table[], int maxIndex);
  void Heap(int table[], int maxIndex, int subIndex);
  void QuickFP(int table[], int first, int last);
  void QuickRP(int table[], int first, int last);
  void Quicksort(int table[], int first, int last);
  void Swap(int *x, int *y);
  int RandomSplit(int table[], int first, int last);
  int Split(int table[], int first, int last);
  int GetComparisons();
};

#endif

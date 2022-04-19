#ifndef Sorting_h
#define Sorting_h

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Sorting {
  int comparisons;
  
  public:
  void Selection(int[] table);
  void Merge(int[] table);
  void QuickFP(int[] table);
  void QuickRP(int[] table);
  void Split();
  int GetComparisons();
}

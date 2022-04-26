#include "Sorting.h"
#include <fstream>

int main(int argc, char* argv[]) {

  ifstream file;
  file.open(argv[1]);

  int maxIndex = 0;
  int temp = 0;

  while(file >> temp) {
    maxIndex++;
  }
  file.clear(); //clears eof/fail bits
  file.seekg(0, ios::beg); //goes back to beginning of file

  int* table = new int[maxIndex];
  for(int a = 0; a < maxIndex; a++) {
    file >> table[a];
  }
  
  Sorting test;

  //test.Selection(table, maxIndex);
  //test.Mergesort(table, 0, maxIndex);
  test.Heapsort(table, maxIndex);
  for(int i = 1; i < 6; i++) {
    cout << table[i] << endl;
  }
  cout << table[maxIndex - 1] << endl;

  cout << test.GetComparisons() << endl;
  file.close();
  delete[] table;
  
  return 0;

}

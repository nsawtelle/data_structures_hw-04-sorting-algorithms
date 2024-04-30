#include "../code/Sorting.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // create lexical scopes to let us re-declare 'numbers'
  {
    vector<int> numbers{6, 2, 9, 2, 17, 11, 5, 3, 8};
    cout << "Unsorted data:" << endl;
    disp(numbers);
    bubblesort(numbers);
    cout << "Bubble sort results:" << endl;
    disp(numbers);
  }
  {
    vector<int> numbers{6, 2, 9, 2, 17, 11, 5, 3, 8};
    cout << "Unsorted data:" << endl;
    disp(numbers);
    quicksort(numbers, 0, numbers.size() - 1);
    cout << "Quicksort results:" << endl;
    disp(numbers);
  }
}

//  Sorting
//
//  Author: Nicole Sawtelle
//  CU ID: nisa1697
//  GitHub username: nsawtelle
//

#include "Sorting.h"

#include <iostream>

using namespace std;

/*
  Please refer to sorting.h for documentation on each function.

   + ------ N O T E: -- Big scary warning! -----------------------------\
   |                                                                    |
   |    We clearly can't use unit testing to ensure that you're         |
   |    actually implementing the correct algorithm. I suppose we could |
   |    write some complicated static analysis checker. But it is       |
   |    easier to just look at it with our eyeballs.                    |
   |                                                                    |
   |    After the assignment is due, we will look at the most recent    |
   |    version of your implementation that got the highest score and   |
   |    make sure you're not doing something sneaky like using a        |
   |    standard library call to sort a vector.                         |
   |                                                                    |
   |    Anyone caught doing this (even though it is kinda funny) will   |
   |    be given 0 points on the assignment.                            |
   |                                                                    |
   `--------------------------------------------------------------------/
*/

// Helper function made for you - just run disp(your_data) to print to console.
void disp(vector<int> const& numbers) {
  if (numbers.size() == 0) {
    cout << "No data" << endl;
    return;
  }
  for (auto const v : numbers) {
    cout << " " << v;
  }
  cout << endl;
}

void quicksort(vector<int>& data, int low_idx, int high_idx) {
  if (low_idx < high_idx) {
      int pivot_index = quicksort_partition(data, low_idx, high_idx);
      quicksort(data, low_idx, pivot_index - 1);
      quicksort(data, pivot_index + 1, high_idx);
  }
}

int quicksort_partition(vector<int>& data, int low_idx, int high_idx) {
  int pivot = data[high_idx];
  int i = low_idx - 1;
  for (int j = low_idx; j <= high_idx - 1; j++) {
    if (data[j] <= pivot) {
      i++;
      int temp = data[i];
      data[i] = data[j];
      data[j] = temp;
    }
  }
  int temp = data[i + 1];
  data[i + 1] = data[high_idx];
  data[high_idx] = temp;
  return (i + 1);
}

void bubblesort(vector<int>& data) {
  int n = data.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j] > data[j + 1]) {
        int temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

void mergesort(vector<int>& data) {
  if (data.size() <= 1) {
    return;
  }
  int mid = data.size() / 2;
  vector<int> left(data.begin(), data.begin() + mid);
  vector<int> right(data.begin() + mid, data.end());
  mergesort(left);
  mergesort(right);
  merge(left, right, data);
}

void merge(vector<int>& left, vector<int>& right, vector<int>& result) {
  int n1 = left.size();
  int n2 = right.size();
  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      result[k++] = left[i++];
    } else {
      result[k++] = right[j++];
    }
  }
  while (i < n1) {
    result[k++] = left[i++];
  }
  while (j < n2) {
    result[k++] = right[j++];
  }
}

// Insertion sort
void mystery_sort(vector<int>& data) {
  int n = data.size();
  for (int i = 1; i < n; i++) {
    int key = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] > key) {
      data[j + 1] = data[j];
      j = j - 1;
    }
    data[j + 1] = key;
  }
}

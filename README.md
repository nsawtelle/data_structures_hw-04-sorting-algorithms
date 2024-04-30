# CSCI 2270 – Data Structures - Assignment 4
## Overview

In this assignment you'll implement several _sorting_ algorithms.

There are many algorithms that expect data to be sorted in order to work efficiently. As such, sorting is a common and important activity.

In this assignment, you'll be asked to implement several well-known sorting algorithms using plain lists of integers. Specifically, they will sort data contained in _references_ to `vector<int>` collections. 

You can access the vector as if it is an array of values. Here's a quick cheat sheet for working with C++ vectors:

```c++
vector<int> data; // declare and initialize a vector of integers
data.push_back(5); // add 5 to the end of its list
data[3] = 188; // set the value at index 3 to be 188
int n = data.size(); // get the current number elements
int v = data[3]; // read the value at index 3
```

There are [many, many, oh so many](https://en.cppreference.com/w/cpp/container/vector) more operations that you can use with vectors. You shouldn't need them for this assignment, but it is good to know for the future.

Your goal is to arrange the data in non-decreasing order (e.g. `1, 4, 5, 5, 9, ...`), and leave the sorted values in the same vector that you were given. This is called _[in place sorting](https://en.wikipedia.org/wiki/In-place_algorithm)_.

Refer to the video lectures for details on each sorting algorithm: quick sort, bubble sort, and merge sort; you'll also need to research and implement one other 'mystery' algorithm of your choosing.

### Complexity

As you've probably read by now in zyBooks or elsewhere, we can measure the complexity of an algorithm mathematically. We have _time_ complexity: how many steps are needed to run the algorithm proportional to the number of inputs; and _space_ complexity: how much data must be stored, proportionally to the input size.

If an algorithm takes the same number of steps, regardless of the data input size, that is _constant time_, often written as `O(1)` but pronounced "Big Oh of One". An example of this might be to find the 100th element in an array that has gazillion elements. Since an array is laid out with contiguous memory, we only need to know where the array begins, how big each element is, and reference the memory directly. So, array element lookup is `O(1)`.

If an algorithm's runtime scales linearly with the input size, we say that is _linear time_, written as `O(n)` and pronounced "Big Oh of N". An example of this might be to compute the average of a list of numbers when you have no way to predict their values. To do this you have to examine each element.

As you work through the sorting algorithms in this homework, think about their time and space complexity. This will be on the test! 🥸

### Wikipedia is your friend

Check out the Wikipedia pages for these algorithms. There is pseudo-code provided, which should make this much more straightforward. (It is also good practice in parsing algorithms and translating them to the programming language at hand).
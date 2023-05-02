# Sorting Algorithms in C++ 📈🔢

This repository contains an implementation of several common sorting algorithms in C++. The purpose of this project is to provide a resource for anyone who wants to learn more about sorting algorithms and how they work.

## Algorithms 🧮

The following algorithms are currently implemented:

- Bubble Sort 🧼
- Insertion Sort 📩
- Shell Sort 🐚
- Selection Sort 👈👉
- Heap Sort 💾
- Merge Sort 🤝
- Quick Sort ⚡

Each algorithm is implemented in its own C++ source file, which can be compiled and run as a standalone program or imported into another C++ project.

## Usage 💻

To compile and run any of the algorithms from the command line, simply navigate to the project directory and type:

```
g++ -std=c++11 <algorithm_name>.cpp -o <algorithm_name>
./<algorithm_name>
```

Replace `<algorithm_name>` with the name of the C++ source file you want to compile and run.

Alternatively, you can include any of the source files in your own C++ project and use them as a library. For example:

```c++
#include "bubble_sort.h"

int main() {
  int myArray[] = {4, 2, 7, 1, 3};
  int arraySize = sizeof(myArray) / sizeof(int);

  bubble_sort(myArray, arraySize);

  for (int i = 0; i < arraySize; ++i) {
    std::cout << myArray[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
```

## Contributing 🤝🏼

Contributions to this project are welcome! If you find a bug or want to add a new algorithm, please open an issue or submit a pull request.

## Acknowledgements 🙏

This project was inspired by the sorting algorithms section of the [Algorithms and Data Structures](https://www.youtube.com/watch?v=D_bv_kf77Jk&list=PLtS9P-Hn2iKiGd13-XgY_lRRXG0UE40ui&index=9) course on YouTube, taught by Dr.Ahmed Hamdy.

## Contact 📧

If you have any questions or comments about this project, please feel free to contact me at [LinkedIn](https://www.linkedin.com/in/bishoy-wadea-27b016250/).

this ReadMe is written by ChatGPT :)

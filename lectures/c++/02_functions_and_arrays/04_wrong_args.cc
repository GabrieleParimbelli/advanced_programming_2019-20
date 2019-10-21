#include <iostream>

// In forward declaration I can write 'void swap(int, int)'
void swap(int a, int b);

int main() {
  int x{3}, y{7};
  std::cout << "before\t" << x << " " << y << std::endl;
  swap(x, y);
  std::cout << "after\t" << x << " " << y << std::endl;
  return 0;
}

// This function is wrong because it does not use pointers

void swap(int a, int b) {	// variables passed by value
  int t{a};
  a = b;
  b = t;
  std::cout << "inside\t" << a << " " << b << std::endl;
}


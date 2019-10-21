#include <iostream>

void surprise(double a[], const std::size_t n) {
  for (auto i = 0llu; i < n; ++i) {  // '0llu' = 0 long long unsigned
    a[i] = 77;
  }
}

int main() {
  int ai[4];
  float af[9];
  ai[0] = 9;    // first element
  af[8] = 3.3;  // last element
  ai[88] = 7;   // undefined behavior, no range checking

  // size_t to avoid overflow problems (non-negative number)
  for (std::size_t k{0}; k < 4; ++k)
    std::cout << "ai[" << k << "] = " << ai[k] << '\n';
  // elements not defined take values from what is contained in moemory cells from previous codes

  std::cout << "\n-------------------------------\n\n";

  for (std::size_t k{0}; k < 9; ++k)
    std::cout << "af[" << k << "] = " << af[k] << '\n';

  std::cout << "\n how is an array in memory?\n\n";

  for (std::size_t k{0}; k < 9; ++k)
    std::cout << "&af[" << k << "] = " << &af[k] << '\n';

  std::cout << "\n-------------------------------\n\n";

  double ad[7]{1.1, 2.2, 3.3};  // the rest is set to 0

  *ad = 9.9;  // an array is implicitly converted to
              // a pointer to its first element;
  for (std::size_t k{0}; k < 7; ++k)
    std::cout << ad[k] << std::endl;

  // double ad2[2] {1,2,3,4}; // error

  // name of arrays are pointers! So after 'surprise' values change even in main without necessity of using * &
  surprise(ad, 5);
  std::cout << "\nafter surprise()" << std::endl;
  for (std::size_t k{0}; k < 7; ++k)
    std::cout << ad[k] << std::endl;

  return 0;
}

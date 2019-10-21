#include <iostream>

unsigned int factorial(unsigned int n) {
  unsigned int ret{1};
  while (n > 1) {
    ret *= n;
    --n;

    // or simply
    // ret *= n--;
  }
  return ret;
}

int main() {
  unsigned int f5{factorial(5)};
  // 'auto' means compiler has to interpret what the type is (introduced in C++14)
  // In this case it will be an 'unsigned int' since 'factorial' returns that.
  // I can also define a function to be 'auto': return type is deduced by compiler
  auto f6 = factorial(6);  // use = with auto.
  std::cout << "factorial of 5 is " << f5 << '\n'
            << "factorial of 6 is " << f6 << std::endl;

  // errors
  // factorial(); // too few args
  // factorial(3,4,5,5); // too many args
  // factorial("byobu"); // wrong type
  return 0;
}

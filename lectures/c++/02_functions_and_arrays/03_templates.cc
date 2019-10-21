#include <iostream>


// 'template' avoids repetitions of defining same function for different types
// also 'template <class T>' can be used

// forward declaration
template <typename T>
T dwim(const T a, const T b);

// template <typename T, OT>
// T dwim(const T a, const OT b);
// In main I can write then
//    dwim<int,double>(c,d) (specifying every type)


int main() {
  int a{5}, b{7};
  double c{3.332}, d{7.7};
  float e{23.4}, f{3.34e2};
  char g{'0'}, h{'6'};

  std::cout << dwim<int>(a, b) << '\n'		// add <int> to ensure the compiler understands which type to use
            << dwim(c, d) << '\n'
            << dwim(e, f) << '\n'
            << dwim(g, h) << std::endl;
  return 0;
}

// definition of template
template <typename T>
T dwim(const T a, const T b) {
  return a + b;
}

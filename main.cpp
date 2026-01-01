#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
int main()
{
#ifdef _WIN32
  SetConsoleOutputCP(65001);
#endif
  std::cout << "Hello Wỏld";
  return 0;
}
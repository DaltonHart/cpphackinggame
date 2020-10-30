#include <iostream>

int main()
{
  std::cout << "You are a secret agent breaking into ta secure server room..." << std::endl;

  std::cout << "Enter the correct code to contine..." << std::endl;

  int a = 4;
  int b = 5;
  int c = 6;

  int sum = a + b + c;
  int product = a * b * c;

  std::cout << sum << std::endl;
  std::cout << product << std::endl;

  return 0;
}
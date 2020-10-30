#include <iostream>

int main()
{
  // prints to the terminal the welcome messages
  std::cout << "You are a secret agent breaking into ta secure server room...\n";

  std::cout << "Enter the correct code to contine...\n\n";

  // Declare 3 number code
  const int CodeA = 4;
  const int CodeB = 5;
  const int CodeC = 6;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print CodeSum and CodeProduct to the terminal
  std::cout << "There are 3 numbers in the code\n";
  std::cout << "\nThe codes add-up to: " << CodeSum;
  std::cout << "\nThe codes multiply to give: " << CodeProduct;

  // takes in player input and outputs said output
  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;

  const int GuessSum = GuessA + GuessB + GuessC;
  const int GuessProduct = GuessA * GuessB * GuessC;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nYou Win!";
  }
  else
  {
    std::cout << "\nYou Lose!";
  }

  return 0;
}
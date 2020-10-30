#include <iostream>

void PrintIntro()
{
  std::cout << ".OOOOOOOOOOOOOOO @@                                   @@ OOOOOOOOOOOOOOOO.\nOOOOOOOOOOOOOOOO @ @ @ @OOOOOOOOOOOOOOOO\nOOOOOOOOOO'''''' @ @                                    @ @ ```````OOOOOOOOO\nOOOOO'' aaa @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @\"\"\"                   \"\"\"\"\"\"\"\"\"@@aaaa `OOOO\nOOOOO,\"\"\"\"@@@@@@@@@@@@@@\"\"\"\"                                     a@\"\" OOOA\nOOOOOOOOOoooooo,| OOoooooOOOOOS\nOOOOOOOOOOOOOOOOo,| OOOOOOOOOOOOC\nOOOOOOOOOOOOOOOOOO,| OOOOOOOOOOOOI\nOOOOOOOOOOOOOOOOOO @ | OOOOOOOOOOOOOI\nOOOOOOOOOOOOOOOOO '@                                        OOOOOOOOOOOOOOb\nOOOOOOOOOOOOOOO ' a '      | OOOOOOOOOOOOOy\nOOOOOOOOOOOOOO' '       aa`OOOOOOOOOOOP\n OOOOOOOOOOOOOOb, ..                                          `@aa``OOOOOOOh\n OOOOOOOOOOOOOOOOOOo                                           `@ @ @aa OOOOo\n OOOOOOOOOOOOOOOOOOO | @ @ @OOOOe\n OOOOOOOOOOOOOOOOOOO @aaaaaaa @ @',OOOOn\n OOOOOOOOOOOOOOOOOOO @aaa @ @ @ @ @ @ @ @\"\" @ @OOOOOi\n OOOOOOOOOO ~~aaaaaa\"a                 aaa@@@@@@@@@@\"\"            @@ OOOOOx\nOOOOOO aaaa @\"\"\"\"\"\"\"\" \"\"            @@@@@@@@@@@@\"\"               @@@|`OOOO'\nOOOOOOOo`@ @a aa @ @ @ @ @ @ @ @ @\"\"         a@        @@@@ OOOO9\nOOOOOOO'  `@@a               @@a@@   @@\"\"           a@@   a     |@@@ OOOO3\n`OOOO '       `@    aa@@       aaa\"\"\"          @a        a@     a@@@',OOOO\'\n";

  // prints to the terminal the welcome messages
  std::cout
      << "You are a secret agent breaking into ta secure server room...\n";

  std::cout << "Enter the correct code to contine...\n\n";
}

void PlayGame()
{
  PrintIntro();

  // Declare 3 number code
  const int CodeA = 4;
  const int CodeB = 5;
  const int CodeC = 6;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print CodeSum and CodeProduct to the terminal
  std::cout << "There are 3 numbers in the code\n";
  std::cout << "\nThe codes add-up to: " << CodeSum;
  std::cout << "\nThe codes multiply to give: " << CodeProduct << std::endl;

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
}

int main()
{
  PlayGame();
  return 0;
}
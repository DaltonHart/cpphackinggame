#include <iostream>
#include <ctime>

void PrintIntro(int Difficulty)
{
  std::cout << Difficulty;

  std::cout << "\n\n.OOOOOOOOOOOOOOO @@                                   @@ OOOOOOOOOOOOOOOO.\nOOOOOOOOOOOOOOOO @ @ @ @OOOOOOOOOOOOOOOO\nOOOOOOOOOO'''''' @ @                                    @ @ ```````OOOOOOOOO\nOOOOO'' aaa @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @\"\"\"                   \"\"\"\"\"\"\"\"\"@@aaaa `OOOO\nOOOOO,\"\"\"\"@@@@@@@@@@@@@@\"\"\"\"                                     a@\"\" OOOA\nOOOOOOOOOoooooo,| OOoooooOOOOOS\nOOOOOOOOOOOOOOOOo,| OOOOOOOOOOOOC\nOOOOOOOOOOOOOOOOOO,| OOOOOOOOOOOOI\nOOOOOOOOOOOOOOOOOO @ | OOOOOOOOOOOOOI\nOOOOOOOOOOOOOOOOO '@                                        OOOOOOOOOOOOOOb\nOOOOOOOOOOOOOOO ' a '      | OOOOOOOOOOOOOy\nOOOOOOOOOOOOOO' '       aa`OOOOOOOOOOOP\n OOOOOOOOOOOOOOb, ..                                          `@aa``OOOOOOOh\n OOOOOOOOOOOOOOOOOOo                                           `@ @ @aa OOOOo\n OOOOOOOOOOOOOOOOOOO | @ @ @OOOOe\n OOOOOOOOOOOOOOOOOOO @aaaaaaa @ @',OOOOn\n OOOOOOOOOOOOOOOOOOO @aaa @ @ @ @ @ @ @ @\"\" @ @OOOOOi\n OOOOOOOOOO ~~aaaaaa\"a                 aaa@@@@@@@@@@\"\"            @@ OOOOOx\nOOOOOO aaaa @\"\"\"\"\"\"\"\" \"\"            @@@@@@@@@@@@\"\"               @@@|`OOOO'\nOOOOOOOo`@ @a aa @ @ @ @ @ @ @ @ @\"\"         a@        @@@@ OOOO9\nOOOOOOO'  `@@a               @@a@@   @@\"\"           a@@   a     |@@@ OOOO3\n`OOOO '       `@    aa@@       aaa\"\"\"          @a        a@     a@@@',OOOO\'\n\n";

  // prints to the terminal the welcome messages
  std::cout
      << "You are a secret agent breaking into a level " << Difficulty;

  std::cout << " secure server room...\nEnter the correct code to contine...\n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntro(Difficulty);

  // Declare 3 number code
  const int CodeA = rand() % Difficulty + Difficulty;
  const int CodeB = rand() % Difficulty + Difficulty;
  const int CodeC = rand() % Difficulty + Difficulty;

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
    return true;
  }
  else
  {
    std::cout << "\nYou Lose!";
    return false;
  }
}

int main()
{
  srand(time(NULL)); // create new random seed based on time

  int LevelDifficulty = 1;
  int const MaxDifficulty = 5;

  while (LevelDifficulty <= MaxDifficulty)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();
    std::cin.ignore();

    if (bLevelComplete)
    {
      // increase level difficulty
      ++LevelDifficulty;
    }
  }

  return 0;
}
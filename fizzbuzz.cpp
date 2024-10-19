/*
Notes:
https://github.com/xsabreusx/Catch2/blob/devel/docs/migrate-v2-to-v3.md#how-to-migrate-projects-from-v2-to-v3

Implementation: Use two file distribution
*/

#include <iostream>
#include <string>

std::string fizzbuzz(int n)
{
  if (n % 3 == 0 && n % 5 == 0)
  {
    return "FizzBuzz";
  }
  else if (n % 3 == 0)
  {
    return "Fizz";
  }
  else if (n % 5 == 0)
  {
    return "Buzz";
  }
  else
  {
    return std::to_string(n);
  }
}

int main()
{
  int myInput = 0;
  std::cout << "\nWelcome to FizzBuzz! Input an integer: " << std::endl;
  std::cin >> myInput;
  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore();
    std::cout << "\nInvalid input, please try again:" << std::endl;
    std::cin >> myInput;
  }
  std::cout << fizzbuzz(myInput);
  
  return 0;
}

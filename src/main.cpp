#include <iostream>
#include <vector>

#include "calculator.hpp"
#include "user_input.hpp"
#include "utils.hpp"

int main() {
  std::cout << "Inserisci espressione (es: 5 * 3 - 4): \n";
  std::string stringInput;
  std::getline(std::cin, stringInput);

  std::vector<char> vectorInput = to_char_vector(stringInput);
  
  int index{0};
  for (char element : vectorInput) {

    if (element == '+') {
      
    }
    ++index;
  }
}

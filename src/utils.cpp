#include "utils.hpp"

#include <string>
#include <vector>

std::vector<char> to_char_vector(std::string const& stringInput)
// Input string of char
// Output vector of char taken from stringInput
{
  // Usa il costruttore di intervallo (range constructor)
  // Inizia da stringInput.begin() e finisce a stringInput.end()
  return std::vector<char>(stringInput.begin(), stringInput.end());
}

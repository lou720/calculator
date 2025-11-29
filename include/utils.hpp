#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<char> to_char_vector(std::string const& stringInput);

int trova_indice(const std::vector<int>& vec, int valore);

#endif
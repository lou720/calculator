#include "utils.hpp"

#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<char> to_char_vector(std::string const& stringInput)
// Input string of char
// Output vector of char taken from stringInput
{
  // Usa il costruttore di intervallo (range constructor)
  // Inizia da stringInput.begin() e finisce a stringInput.end()
  return std::vector<char>(stringInput.begin(), stringInput.end());
}

// Funzione che restituisce l'indice (int) o -1 se non trovato
int trova_indice(const std::vector<int>& vec, int valore) {
    // 1. Usa std::find per cercare il valore
    // Restituisce un iteratore alla prima occorrenza del valore,
    // o vec.end() se il valore non è stato trovato.
    auto it = std::find(vec.begin(), vec.end(), valore);

    // 2. Controlla se il valore è stato trovato
    if (it != vec.end()) {
        // 3. Se trovato, usa std::distance per calcolare l'indice
        // std::distance calcola quanti "passi" ci sono tra l'inizio (vec.begin()) 
        // e l'iteratore trovato (it).
        return std::distance(vec.begin(), it);
    } else {
        // Se non trovato, restituisce un valore convenzionale (es. -1)
        return -1;
    }
}
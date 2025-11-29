#include <iostream>
#include "calculator.hpp"

int main() {
    double a, b;
    char op;

    std::cout << "Inserisci operazione (es: 5 * 3): ";
    std::cin >> a >> op >> b;

    try {
        double result;
        switch(op) {
            case '+': result = add(a, b); break;
            case '-': result = sub(a, b); break;
            case '*': result = mul(a, b); break;
            case '/': result = div(a, b); break;
            default:
                std::cerr << "Operatore non valido\n";
                return 1;
        }
        std::cout << "Risultato: " << result << "\n";
    } catch(const std::exception &e) {
        std::cerr << "Errore: " << e.what() << "\n";
    }
}

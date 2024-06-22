// main.cpp

#include <iostream>

// Função para exibir uma mensagem de saudação
void greet(const std::string& name) {
    std::cout << "Olá, " << name << "!" << std::endl;
}

// Função para somar dois números
int sum(int a, int b) {
    return a + b;
}

// Função para subtrair dois números
int subtract(int a, int b) {
    return a - b;
}

// Função para multiplicar dois números
int multiply(int a, int b) {
    return a * b;
}

// Função para dividir dois números
double divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Erro: divisão por zero." << std::endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int main() {
    // Testando as funções
    std::cout << "Testando funções:" << std::endl;
    greet("Mundo");
    std::cout << "5 + 3 = " << sum(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    std::cout << "5 / 3 = " << divide(5, 3) << std::endl;

    return 0;
}

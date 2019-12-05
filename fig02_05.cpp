#include <iostream>

int main()
{
    // declaração de variável
    int number1;
    int number2;
    int sum;

    // solicita dados ao usuário
    std::cout << "Enter first integer: ";
    // lê primeiro inteiro inserido pelo usuário em number1
    std::cin >> number1;

    std::cout << "Enter second integer: ";
    std::cin >> number2;

    // adiciona os números; armazeno o resultado em sum
    sum = number1 + number2;

    // exibe sum; termina a linha
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}

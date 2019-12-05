#include <iostream>
using std::cout;
using std::endl;

//Definição da classe
class GradeBook {
  public:
    void displayMessage()
    {
      cout << "Welcome to the Grade Book!" << endl;
    }
};

int main() {
  // cria um objeto GradeBook
  GradeBook myGrdadeBook;

  // chama a função displayMessage
  myGrdadeBook.displayMessage();

  return 0;
}
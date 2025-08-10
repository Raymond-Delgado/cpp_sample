#include <iostream>
#include <string>

int main(){
  int user_number;

  std::cout << "Enter your favorite number (1-100): ";
  std::cin >> user_number;
  
  std::cout << "That is my favorite number too!" << std::endl;
  std::string message = "No really " + std::to_string(user_number) + " is really my favorite number!";
  std::cout << message;

  return 0;
}
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>

int main(){

  std::cout << '\n';

  std::cout << "cmath" << '\n';
  
  std::cout << "std::pow(2, 10): " << std::pow(2, 10) << '\n';
  std::cout << "std::pow(2, 0.5): " << std::pow(2, 0.5) << '\n';
  std::cout << "std::exp(1): " << std::exp(1) << '\n';
  std::cout << "std::ceil(5.5): " << std::ceil(5.5) << '\n';
  std::cout << "std::floor(5.5): " << std::floor(5.5) << '\n';
  std::cout << "std::fmod(5.5, 2): " << std::fmod(5.5, 2) << '\n';
  double intPart;
  auto fracPart= std::modf(5.7, &intPart);
  std::cout << "fmod(5.7, &intPart): " << intPart << " + " << fracPart << '\n'; 
  
  std::cout << "\ncstdlib: " << "\n\n";
  std::div_t divresult= std::div(14, 5);
  std::cout << "std::div(14, 5): " << divresult.quot << " reminder: " << divresult.rem << '\n';
  
  // seed
  std::srand(time(nullptr)); 
  for ( int i=0; i <= 10; ++i){
    std::cout << "Dice: " << (rand()%6 + 1) << '\n';
  }
  
  std::cout << '\n';

}
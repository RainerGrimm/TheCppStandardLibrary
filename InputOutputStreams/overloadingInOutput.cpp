#include <iostream>

class Fraction{
public:
  Fraction(int num=0, int denom=0):numerator(num), denominator(denom){}

  friend std::istream& operator>> (std::istream& in, Fraction &frac);
  friend std::ostream& operator<< (std::ostream& out, const Fraction& frac);

private:
  int numerator;
  int denominator;
};

std::istream& operator>> (std::istream& in, Fraction& frac){

  in >> frac.numerator;
  in >> frac.denominator;

  return in;

}

std::ostream& operator<< (std::ostream& out, const Fraction& frac){

    out << frac.numerator << "/" << frac.denominator;
    return out;
}

int main(){

  std::cout << '\n';

  Fraction frac(3, 4);
  Fraction frac2(7, 8);
  std::cout << "frac(3, 4): " <<  frac << '\n';
  std::cout << frac << "   " << frac2 << '\n';

  std::cout << '\n';

  std::cout << "Enter two natural numbers for a Fraction: " << '\n';
  Fraction fracDef;
  std::cin >> fracDef;
  std::cout << "fracDef: " << fracDef << '\n';

  std::cout << '\n';

}

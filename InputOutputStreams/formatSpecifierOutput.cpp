#include <iomanip>
#include <iostream>

int main(){

  std::cout << '\n';

  std::cout << "std::setw, std::setfill and std::left, right and internal: " << '\n';

  std::cout.fill('#');
  std::cout << -12345 << '\n';
  std::cout << std::setw(10) << -12345 << '\n';
  std::cout << std::setw(10) << std::left << -12345 << '\n';
  std::cout << std::setw(10) << std::right << -12345 << '\n';
  std::cout << std::setw(10) << std::internal << -12345 << '\n';

  std::cout << '\n';

  std::cout << "std::showpos:" << '\n';

  std::cout << 2011 << '\n';
  std::cout << std::showpos << 2011 << '\n';


  std::cout << std::noshowpos << '\n';

  std::cout << "std::uppercase: "  << '\n';
  std::cout << 12345678.9 << '\n';
  std::cout << std::uppercase << 12345678.9 << '\n';

  std::cout << std::nouppercase << '\n';

  std::cout << "std::showbase and std::oct, dec and hex: " << '\n';
  std::cout << 2011 << '\n';
  std::cout << std::oct << 2011 << '\n';
  std::cout << std::hex << 2011 << '\n';

  std::cout << '\n';

  std::cout << std::showbase;
  std::cout << std::dec << 2011 << '\n';
  std::cout << std::oct << 2011 << '\n';
  std::cout << std::hex << 2011 << '\n';

  std::cout << std::dec << '\n';

  std::cout << "std::setprecision, std::fixed and std::scientific: " << '\n';

  std::cout << 123.456789 << '\n';
  std::cout << std::fixed << '\n';
  std::cout << std::setprecision(3) << 123.456789 << '\n';
  std::cout << std::setprecision(4) << 123.456789 << '\n';
  std::cout << std::setprecision(5) << 123.456789 << '\n';
  std::cout << std::setprecision(6) << 123.456789 << '\n';
  std::cout << std::setprecision(7) << 123.456789 << '\n';
  std::cout << std::setprecision(8) << 123.456789 << '\n';
  std::cout << std::setprecision(9) << 123.456789 << '\n';

  std::cout << '\n';
  std::cout << std::setprecision(6) << 123.456789 << '\n';
  std::cout << std::scientific << '\n';
  std::cout << std::setprecision(6) << 123.456789 << '\n';
  std::cout << std::setprecision(3) << 123.456789 << '\n';
  std::cout << std::setprecision(4) << 123.456789 << '\n';
  std::cout << std::setprecision(5) << 123.456789 << '\n';
  std::cout << std::setprecision(6) << 123.456789 << '\n';
  std::cout << std::setprecision(7) << 123.456789 << '\n';
  std::cout << std::setprecision(8) << 123.456789 << '\n';
  std::cout << std::setprecision(9) << 123.456789 << '\n';

  std::cout << '\n';


}

#include <chrono>
#include <iostream>

int main() {

    auto now = std::chrono::system_clock::now();
    std::cout << "The current time is " << now << " UTC\n";        
    auto currentYear = std::chrono::year_month_day(std::chrono::floor<std::chrono::days>(now)).year();
    std::cout << "The current year is " << currentYear << '\n';    
    auto h = std::chrono::floor<std::chrono::hours>(now) - std::chrono::sys_days(std::chrono::January/1/currentYear);
    std::cout << "It has been " << h << " since New Years!\n";     
    
    std::cout << '\n';
    
    auto birthOfChrist = std::chrono::year_month_weekday(std::chrono::sys_days(std::chrono::January/01/0000));
    std::cout << "Weekday: " << birthOfChrist.weekday() << '\n';   
    
}

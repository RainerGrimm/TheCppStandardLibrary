#include <iostream>
#include <chrono>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;
using namespace std::chrono_literals;

int main(){
    
    fs::path path = fs::current_path() / "rainer.txt";
    std::ofstream(path.c_str()); 
    const auto fTime = fs::last_write_time(path);
    const auto sTime = std::chrono::clock_cast<std::chrono::system_clock>(fTime);

 
    std::time_t cftime = std::chrono::system_clock::to_time_t(sTime); 
    std::cout << "Write time on server " << std::asctime(std::localtime(&cftime));
    std::cout << "Write time on server " << std::asctime(std::gmtime(&cftime)) << '\n';
 
    const auto fTime2 = fTime + 2h;
    const auto sTime2 = std::chrono::clock_cast<std::chrono::system_clock>(fTime2); 
 
    std::time_t cftime2 = std::chrono::system_clock::to_time_t(sTime2);
    std::cout << "Local time on client " << std::asctime(std::localtime(&cftime2)) << '\n';
    
    fs::remove(path);
    
}

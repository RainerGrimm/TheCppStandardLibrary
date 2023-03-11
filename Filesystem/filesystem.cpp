#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>
namespace fs = std::filesystem;
 
int main(){

    std::cout << "Current path: " << fs::current_path() << '\n';

    std::string dir= "sandbox/a/b";
    fs::create_directories(dir);

    std::ofstream("sandbox/file1.txt");
    fs::path symPath= fs::current_path() /=  "sandbox";
    symPath /= "syma";
    fs::create_symlink("a", "symPath");
    
    std::cout << "fs::is_directory(dir): " << fs::is_directory(dir) << '\n';
    std::cout << "fs::exists(symPath): "  << fs::exists(symPath) << '\n';
    std::cout << "fs::symlink(symPath): " << fs::is_symlink(symPath) << '\n';
    

    for(auto& p: fs::recursive_directory_iterator("sandbox"))
        std::cout << p << '\n';
    fs::remove_all("sandbox");
    
}

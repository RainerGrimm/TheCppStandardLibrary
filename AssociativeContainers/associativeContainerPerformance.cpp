#include <chrono>
#include <iostream>
#include <map>
#include <random>
#include <unordered_map>

static const long long mapSize= 10000000;
static const long long accSize= 1000000;

int main(){

  std::cout << '\n';

  std::map<int, int> myMap;
  std::unordered_map<int, int> myHash;

  // identity map for the first 10 million natural numbers
  for ( long long i=0; i < mapSize; ++i ){
    myMap[i]=i;
    myHash[i]= i;
  }

  std::vector<int> randValues;
  randValues.reserve(accSize);

  // random values
  std::random_device seed;
  std::mt19937 engine(seed());
  std::uniform_int_distribution<> uniformDist(0, mapSize);
  for ( long long i=0 ; i< accSize ; ++i) randValues.push_back(uniformDist(engine));

  // read 1 million randomly choosen values from the map and the unordered_map
  
  auto start = std::chrono::system_clock::now();
  for ( long long i=0; i < accSize; ++i){
    myMap[randValues[i]];
  }
  std::chrono::duration<double> dur= std::chrono::system_clock::now() - start;
  std::cout << "time for std::map: " << dur.count() << " seconds" << '\n';

  auto start2 = std::chrono::system_clock::now();
  for ( long long i=0; i < accSize; ++i){
    myHash[randValues[i]];
  }
  std::chrono::duration<double> dur2= std::chrono::system_clock::now() - start2;
  std::cout << "time for std::unordered_map: " << dur2.count() << " seconds" << '\n';

  std::cout << '\n';

}

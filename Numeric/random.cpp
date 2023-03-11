#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <random>

static const int NUM=1000000;

void writeToFile(const char* fileName , const std::map<int, int>& data ){

  std::ofstream file(fileName);

  if ( !file ){
    std::cerr << "Could not open the file " << fileName << ".";
    exit(EXIT_FAILURE);
  }

  // print the datapoints to the file
  for ( auto mapIt: data) file << mapIt.first << " " <<  mapIt.second << '\n';

}

int main(){

  std::random_device seed;

  // default generator
  std::mt19937 engine(seed());

  // distributions

  // min= 0; max= 20
  std::uniform_int_distribution<> uniformDist(0, 20);
  // mean= 50; sigma= 8
  std::normal_distribution<> normDist(50, 8);
  // mean= 6;
  std::poisson_distribution<> poiDist(6);
  // alpha= 1;
  std::gamma_distribution<> gammaDist;

  std::map<int, int> uniformFrequency;
  std::map<int, int> normFrequency;
  std::map<int, int> poiFrequency;
  std::map<int, int> gammaFrequency;

  for ( int i=1; i<= NUM; ++i){
    ++uniformFrequency[uniformDist(engine)];
    ++normFrequency[round(normDist(engine))];
    ++poiFrequency[poiDist(engine)];
    ++gammaFrequency[round(gammaDist(engine))];
  }

  writeToFile("uniform_int_distribution.txt", uniformFrequency);
  writeToFile("normal_distribution.txt", normFrequency);
  writeToFile("poisson_distribution.txt", poiFrequency);
  writeToFile("gamma_distribution.txt", gammaFrequency);

}


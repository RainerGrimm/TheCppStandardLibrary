#include <iostream>
#include <random>
#include <unordered_set>

void getInfo(const std::unordered_set<int>& hash){

  std::cout << "hash.bucket_count(): " << hash.bucket_count() << '\n';
  std::cout << "hash.load_factor(): " << hash.load_factor() << '\n';

}

void fillHash(std::unordered_set<int>& h, int n){

  std::random_device seed;
  // default generator
  std::mt19937 engine(seed());
  // get random numbers 0 - 1000
  std::uniform_int_distribution<> uniformDist(0, 1000);

  for ( int i=1; i<= n; ++i){
    h.insert(uniformDist(engine));
  }

}

int main(){

  std::cout << '\n';

  std::unordered_set<int> hash;
  std::cout << "hash.max_load_factor(): " << hash.max_load_factor() << '\n';

  std::cout << '\n';

  getInfo(hash);

  std::cout << '\n';

  // only to be sure
  hash.insert(500);
  // get the bucket of 500
  std::cout << "hash.bucket(500): " << hash.bucket(500) << '\n';

  std::cout << '\n';

  // add 100 elements
  fillHash(hash, 100);
  getInfo(hash);

  std::cout << '\n';

  // at least 500 buckets
  std::cout << "hash.rehash(500): " << '\n';
  hash.rehash(500);

  std::cout << '\n';

  getInfo(hash);

  std::cout << '\n';

  // get the bucket of 500
  std::cout << "hash.bucket(500): " << hash.bucket(500) << '\n';

  std::cout << '\n';

}

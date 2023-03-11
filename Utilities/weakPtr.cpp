#include <iostream>
#include <memory>

class MyInt{
public:

  MyInt(int i):i_(i){}
  int get() const{ return i_; }

private:
  int i_;
};

int main(){

  std::cout << '\n';

  std::cout << std::boolalpha;

  // default constructor
  std::weak_ptr<MyInt> weakPtr;
  std::cout << "weakPtr.use_count(): " << weakPtr.use_count() << '\n';
  std::cout << "weakPtr.expired(): " << weakPtr.expired() << '\n';

  std::cout << '\n';

  std::shared_ptr<MyInt> sharedPtr(new MyInt(2011));
  std::cout << "sharedPtr.use_count(): " << sharedPtr.use_count() << '\n';

  // initialize weakPtr
  weakPtr= sharedPtr;
  std::cout << "weakPtr.use_count(): " << weakPtr.use_count() << '\n';
  std::cout << "weakPtr.expired(): " << weakPtr.expired() << '\n';

  std::weak_ptr<MyInt> weakPtr1(sharedPtr);

  std::cout << '\n';

  // refer to the resource
  std::cout << "sharedPtr->get(): " << sharedPtr->get() << '\n';
  // will not work with weakPtr
  // std::cout << "weakPtr->get()" << weakPtr->get() << '\n';

  if(std::shared_ptr<MyInt> sharedPtr1 = weakPtr.lock()) {
    std::cout << "sharedPtr->get(): " << sharedPtr->get() << '\n';
  }
  else{
    std::cout << "Don't get the resource!" << '\n';
  }

  std::cout << '\n';

  // reset the weakPtr
  weakPtr.reset();
  if(std::shared_ptr<MyInt> sharedPtr1 = weakPtr.lock()) {
      std::cout << "sharedPtr->get(): " << sharedPtr->get() << '\n';
  }
  else{
    std::cout << "Don't get the resource!" << '\n';
  }

  // swap weakPtr2 and weakPtr3

  std::cout << '\n';
  std::shared_ptr<MyInt> sharedPtr2(new MyInt(2));
  std::shared_ptr<MyInt> sharedPtr3(new MyInt(3));
  std::weak_ptr<MyInt> weakPtr2(sharedPtr2);
  std::weak_ptr<MyInt> weakPtr3(sharedPtr3);

  if(std::shared_ptr<MyInt> sharedFromWeak2 = weakPtr2.lock()) {
    std::cout << "sharedFromWeak2->get(): " << sharedFromWeak2->get() << '\n';
  }

  std::cout << '\n';

  weakPtr2.swap(weakPtr3);
  if(std::shared_ptr<MyInt> sharedFromWeak2 = weakPtr2.lock()) {
      std::cout << "sharedFromWeak2->get(): " << sharedFromWeak2->get() << '\n';
  }

  std::cout << '\n';

  std::swap(weakPtr2, weakPtr3);
  if(std::shared_ptr<MyInt> sharedFromWeak2 = weakPtr2.lock()) {
    std::cout << "sharedFromWeak2->get(): " << sharedFromWeak2->get() << '\n';
  }

  std::cout << '\n';

}

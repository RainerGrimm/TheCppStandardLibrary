#include <iostream>
#include <memory>

class MyInt{
public:
  MyInt(int v):val(v){
   std::cout << "  Hello: " << val << '\n';
  }
  ~MyInt(){
   std::cout << "  Good Bye: " << val << '\n';
  }
private:
  int val;
};

int main(){

  std::cout << '\n';

  std::shared_ptr<MyInt> sharPtr(new MyInt(1998));
  
  std::cout << "sharedPtr.use_count(): " << sharPtr.use_count() << '\n';
  {
    std::shared_ptr<MyInt> locSharPtr(sharPtr);
    std::cout << "locSharPtr.use_count(): " << locSharPtr.use_count() << '\n';
  }
  std::cout << "sharPtr.use_count(): "<<  sharPtr.use_count() << '\n';

  std::shared_ptr<MyInt> globSharPtr= sharPtr;
  std::cout << "sharPtr.use_count(): "<<  sharPtr.use_count() << '\n';
  
  globSharPtr.reset();
  std::cout << "sharPtr.use_count(): "<<  sharPtr.use_count() << '\n';

  sharPtr= std::shared_ptr<MyInt>(new MyInt(2011));

  std::cout << '\n';

}
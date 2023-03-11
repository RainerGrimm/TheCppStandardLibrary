#include <iostream>
#include <memory>

class ShareMe: public std::enable_shared_from_this<ShareMe>{
public:
  std::shared_ptr<ShareMe> getShared(){
    return shared_from_this();
  }
};

int main(){

  std::cout << '\n';

  // share the same ShareMe object
  std::shared_ptr<ShareMe> shareMe(new ShareMe);
  std::shared_ptr<ShareMe> shareMe1= shareMe->getShared();

  // both resources have the same address
  std::cout << "Address of resource of shareMe  " << (void*)shareMe.get() << " " << '\n';
  std::cout << "Address of resource of shareMe1 " << (void*)shareMe1.get() << " " << '\n';

  // the use_count is 2
  std::cout << "shareMe.use_count(): "  << shareMe.use_count() << '\n';

  std::cout << '\n';

}



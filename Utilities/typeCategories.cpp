#include <iostream>
#include <string>
#include <type_traits>

int main(){

  std::cout << '\n';
  std::cout << std::boolalpha;

  std::cout << "primary type categories" << '\n';

  std::cout << "std::is_void<void>::value: " << std::is_void<void>::value << '\n';
  std::cout << "std::is_integral<short>::value: " << std::is_integral<short>::value << '\n';
  std::cout << "std::is_floating_point<double>::value: " << std::is_floating_point<double>::value << '\n';
  std::cout << "std::is_array<int []>::value: " << std::is_array<int [] >::value << '\n';
  std::cout << "std::is_pointer<int*>::value: " << std::is_pointer<int*>::value << '\n';
  std::cout << "std::is_reference<int&>::value: " << std::is_reference<int&>::value << '\n';
  struct A{
    int a;
    int f(double){return 2011;}
  };
  std::cout << "std::is_member_object_pointer<int A::*>::value: " << std::is_member_object_pointer<int A::*>::value << '\n';
  std::cout << "std::is_member_function_pointer<int (A::*)(double)>::value: " << std::is_member_function_pointer<int (A::*)(double)>::value << '\n';
  enum E{
    e= 1,
  };
  std::cout << "std::is_enum<E>::value: " << std::is_enum<E>::value << '\n';
  union U{
    int u;
  };
  std::cout << "std::is_union<U>::value: " << std::is_union<U>::value << '\n';
  std::cout << "std::is_class<std::string>::value: " << std::is_class<std::string>::value << '\n';
  std::cout << "std::is_function<int * (double)>::value: " << std::is_function<int * (double)>::value << '\n';

  std::cout << '\n';

}

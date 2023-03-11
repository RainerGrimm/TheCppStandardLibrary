#include <span>

template <typename T>
void copy_n(const T* p, T* q, int n){}

template <typename T>
void copy(std::span<const T> src, std::span<T> des){}

int main(){
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {3, 4, 5};
  
    copy_n(arr1, arr2, 3);     
    copy<int>(arr1, arr2);         
    
}

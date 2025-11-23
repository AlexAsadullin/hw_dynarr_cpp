#include "dyn_arr.h"
#include <iostream>

int main() {
  DynamicArray arr;
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5);
  arr.printData();
  std::cout << arr.min() << std::endl;
  std::cout << arr.max() << std::endl;
  std::cout << arr.add(0, 2) << std::endl;
  arr.printData();
  std::cout << arr[2] << std::endl;
  std::cout << arr.operator()() << std::endl;

  std::cout << "\n=== New Methods Tests ===" << std::endl;
  
  arr.push_front(2);
  std::cout << "After push_front(2): ";
  arr.printData();

  std::cout << "Front: " << arr.front() << std::endl;
  std::cout << "Back: " << arr.back() << std::endl;

  arr.insert(2, 99);
  std::cout << "After insert(2, 99): ";
  arr.printData();

  arr.delete_idx(1);
  std::cout << "After delete_idx(1): ";
  arr.printData();

  arr.erase_after(2);
  std::cout << "After erase_after(2): ";
  arr.printData();

  std::cout << "Before increase - Capacity: " << arr.get_capacity() << std::endl;
  arr.increase_capacity(20);
  std::cout << "After increase_capacity(20): " << arr.get_capacity() << std::endl;

  arr.decrease_capacity(5);
  std::cout << "After decrease_capacity(5): " << arr.get_capacity() << std::endl;
  std::cout << "Final data: ";
  arr.printData();

  return 0;
}
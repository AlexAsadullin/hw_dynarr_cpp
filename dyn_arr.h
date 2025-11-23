#ifndef DYN_ARR_H
#define DYN_ARR_H

#include <cstdint>

class DynamicArray {
private:
  float* data;
  std::int64_t size = -1;
  std::int64_t capacity;

  bool isEmpty() {
    return size == -1;
  }

public:
  DynamicArray();
  DynamicArray(std::int64_t capacity);
  DynamicArray(DynamicArray& other);
  ~DynamicArray();

  void push_back(float x);
  void push_front(float x);
  float front();
  float back();
  void insert(std::int64_t idx, float val);
  void delete_idx(std::int64_t idx);
  void erase_after(std::int64_t idx);
  void increase_capacity(std::int64_t newCapacity);
  void decrease_capacity(std::int64_t newCapacity);
  
  float add(std::int64_t idx1, std::int64_t idx2);
  float max();
  float min();
  void clear();
  void reinitialize();
  void printData();

  float operator[](std::int64_t idx);
  float operator()();

  std::int64_t get_capacity() {
    return capacity;
  }
};

#endif
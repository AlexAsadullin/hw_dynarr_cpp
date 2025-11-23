# Quick start
g++ main.cc -o app
./app

# Результаты запуска main.cc

3 4 5 
3
5
8
3 4 5 
3
12

=== New Methods Tests ===
After push_front(2): 2 3 4 5 
Front: 2
Back: 5
After insert(2, 99): 2 3 99 4 5 
After delete_idx(1): 2 99 4 5 
After erase_after(2): 2 99 4 
Before increase - Capacity: 8
After increase_capacity(20): 20
After decrease_capacity(5): 5
Final data: 2 99 4 
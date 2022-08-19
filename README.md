## Atomic thread safe map

An unordered map that it's thread-safe to call the [] operator from multiple threads at the same time.

# Build 
```clang++ -fsanitize=thread -std=c++17 atomic_unordered_map_thread_safe_test.cpp```

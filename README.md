## Atomic thread safe map

An unordered map that it's thread-safe to call the [] operator from multiple threads at the same time.

# Build 
Build thread-safe version of unordered map:

```clang++ -fsanitize=thread -std=c++17 -g -fpie atomic_unordered_map_thread_safe_test.cpp```

Build non thread-safe version of unordered map:

```clang++ -fsanitize=thread -std=c++17 -g -fpie unordered_map_thread_safe_test.cpp```

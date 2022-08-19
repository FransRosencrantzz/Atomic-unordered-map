#include <pthread.h>

#include <iostream>
#include <mutex>
#include <unordered_map>

struct Settings {
  Settings(){};
  int fps;
  int width;
  int height;
};

std::unordered_map<int, Settings> settings;
Settings &getSettings(const int key) { return settings[key]; }

void *Thread1(void *x) {
  auto &foo = getSettings(1);
  return NULL;
}

void *Thread2(void *x) {
  auto &foo = getSettings(1);
  return NULL;
}

int main() {
  pthread_t t[2];
  pthread_create(&t[0], NULL, Thread1, NULL);
  pthread_create(&t[1], NULL, Thread2, NULL);
  pthread_join(t[0], NULL);
  pthread_join(t[1], NULL);
}
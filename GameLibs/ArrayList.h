#include <stdio.h>

class ArrayList<object> {
  private:
  object** ptrs;
  int size = 0;
  public:
  ArrayList() {
    
  }
  void add(object* o) {
    object** newlist = new object*[size + 1];
    if (size == 0) {
      ptrs[0] = o;
      return;
    }
    for (int i = 0; i < size; i++) {
      if (ptrs[i] == nullptr) {
        continue;
      }
     newlist[i] = ptrs[i];
    }
    ptrs = newlist;
    size++;
    ptrs[size] = o;
  }
  void remove(int index) {
   ptrs[index] = nullptr;
  }
  void remove(object* o) {
    bool found = false;
   for (int i = 0; i < size; i++) {
     if (ptrs[i] == o) {
       ptrs[i] = nullptr;
       size--;
       found = true;
       break;
     }
   }
    if (!found) return;
    object** newlist = new object*[size];
    for (int i = 0; i < size; i++) {
      if (ptrs[i] == nullptr) {
        continue;
      }
     newlist[i] = ptrs[i];
    }
  }
  
}


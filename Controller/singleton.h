#ifndef CONTROLLER_SINGLETON_H_
#define CONTROLLER_SINGLETON_H_

#include "controller.h"

namespace s21 {
class Singleton {
 private:
  Controller* controller;

 protected:
  Singleton() { controller = new Controller(); }
  ~Singleton() { delete controller; }

 public:
  static Singleton* Instance() {
    static Singleton* instance = new Singleton;
    return instance;
  }

  Controller* GetController() { return controller; }
};
}  // namespace s21

#endif  // CONTROLLER_SINGLETON_H_

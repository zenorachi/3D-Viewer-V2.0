#ifndef CONTROLLER_FACADE_H_
#define CONTROLLER_FACADE_H_

#include "../Model/model.h"

namespace s21 {
class Facade {
 public:
  void RotateModel(Model *model, double angle, char axis);
  void MoveModel(Model *model, double value, char axis);
};
}  // namespace s21

#endif  // CONTROLLER_FACADE_H_

#ifndef 3D_VIEWER_V2_0_CONTROLLER_FACADE_H_
#define 3D_VIEWER_V2_0_CONTROLLER_FACADE_H_

#include "../Model/model.h"

namespace s21 {
class Facade {
 public:
  void RotateModel(Model *model, double angle, char axis);
  void MoveModel(Model *model, double value, char axis);
};
}  // namespace s21

#endif  // 3D_VIEWER_V2_0_CONTROLLER_FACADE_H_

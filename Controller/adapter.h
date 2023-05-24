#ifndef 3D_VIEWER_V2_0_CONTROLLER_ADAPTER_H_
#define 3D_VIEWER_V2_0_CONTROLLER_ADAPTER_H_

#include <iostream>

#include "../Model/model.h"

namespace s21 {
class Adapter {
 public:
  std::pair<double *, unsigned *> Convert(Model *model, std::string filename);
};
}  // namespace s21

#endif  // 3D_VIEWER_V2_0_CONTROLLER_ADAPTER_H_

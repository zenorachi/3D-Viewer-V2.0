#ifndef 3D_VIEWER_V2_0_MYOPENGL_H_
#define 3D_VIEWER_V2_0_MYOPENGL_H_

#include <QColor>
#include <QGraphicsSceneMouseEvent>
#include <QMoveEvent>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QThread>

#include "View/mainwindow.h"

class Myopengl : public QOpenGLWidget, public QOpenGLFunctions {
 public:
  Myopengl(QWidget *parent = nullptr);
  ~Myopengl() {}

 protected:
  void PointSetting();
  void StripleSetting();
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

 private:
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;
    QColor background_color = QColorConstants::Black;
    QColor points_color = QColorConstants::White;
    QColor line_color = QColorConstants::White;
    int striple = 0;
    int proection = 0;
    int form_points = 0;
    int save_set = 0;
    double thickness = 1;
    double scale = 1;
    std::pair<double *, unsigned *> res;
    std::pair<unsigned, unsigned> size;
    QPoint mPos;
    double point_thickness = 0;
};

#endif  // 3D_VIEWER_V2_0_MYOPENGL_H_

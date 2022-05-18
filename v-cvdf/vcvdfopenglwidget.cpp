#include "vcvdfopenglwidget.h"

VcvdfOpenGLWidget::VcvdfOpenGLWidget(QWidget* parent) : QOpenGLWidget { parent }
{

}

void VcvdfOpenGLWidget::initializeGL()
{
    initializeOpenGLFunctions();
    float r, g, b;
    const float a = 1.0f;
    this->qColor2RGB(Qt::red, r, g, b);
    glClearColor(r, g, b, a);
}

void VcvdfOpenGLWidget::paintGL()
{

}

void VcvdfOpenGLWidget::resizeGL(int w, int h)
{

}

void VcvdfOpenGLWidget::qColor2RGB(const QColor& c, float& r, float& g, float& b) const
{
    const float min = 1.0f;
    const float max = 255.0f;
    const auto normalize = [&](const int& num) -> float {return ((float)num-min)/(max-min);};
    r = normalize(c.red());
    g = normalize(c.green());
    b = normalize(c.blue());
}

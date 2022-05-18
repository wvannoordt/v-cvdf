#ifndef VCVDFOPENGLWIDGET_H
#define VCVDFOPENGLWIDGET_H
//https://www.youtube.com/watch?v=W3-SMvMa8D4&ab_channel=DuarteCorporationTutoriales
//#include "cvdf.h"
#include <QColor>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class VcvdfOpenGLWidget : public QOpenGLWidget, public QOpenGLFunctions
{
public:
    VcvdfOpenGLWidget(QWidget* parent = nullptr);
protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;
private:
    void qColor2RGB(const QColor& c, float& r, float& g, float& b) const;

};

#endif // VCVDFOPENGLWIDGET_H

#pragma once

#ifndef __Coordinate_Systems_Multiple_Widget__
#define __Coordinate_Systems_Multiple_Widget__

#include "shader.h"

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QTimer>
#include <QOpenGLVertexArrayObject>

class CoordinateSystemsMultipleWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    CoordinateSystemsMultipleWidget(QWidget* parent = 0);
    ~CoordinateSystemsMultipleWidget();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private:
    QTimer* timer;
    QOpenGLVertexArrayObject VAO;
    // load and create a texture 
    // -------------------------
	unsigned int texture1, texture2;
	Shader* ourShader;
};

#endif

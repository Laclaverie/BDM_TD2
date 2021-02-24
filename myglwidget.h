#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include "Car.h"
#include "Ground.h"
#include <QOpenGLWidget>
#include <QKeyEvent>

// Classe dediee a l'affichage d'une scene OpenGL
class MyGLWidget : public QOpenGLWidget
{
public:

    // Constructeur
    MyGLWidget(QWidget * parent = nullptr);

protected:

    // Fonction d'initialisation
    void initializeGL();

    // Fonction de redimensionnement
    void resizeGL(int width, int height);

    // Fonction d'affichage
    void paintGL();

    // Fonction de gestion d'interactions clavier
    void keyPressEvent(QKeyEvent* event);
private:
    Car myCar_;
    Ground myGround_;
    QColor monfond_;
};

#endif

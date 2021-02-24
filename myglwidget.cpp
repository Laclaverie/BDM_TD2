#include "myglwidget.h"
#include <QApplication>
#include <QDesktopWidget>


// Declarations des constantes
const unsigned int WIN = 900;

// Constructeur
MyGLWidget::MyGLWidget(QWidget * parent) : QOpenGLWidget(parent)
{
    // Reglage de la taille/position
    setFixedSize(WIN, WIN);
    move(QApplication::desktop()->screen()->rect().center() - rect().center());
    initializeGL();
}


// Fonction d'initialisation
void MyGLWidget::initializeGL()

{
    glEnable(GL_DEPTH_TEST);
    monfond_.setRgbF(0.0,0.0,0.0); // couleur de fond
    glClearColor(monfond_.redF(),monfond_.greenF(),monfond_.blueF(),1.0); //fond gris avec transparence === opaque
    glClear(GL_COLOR_BUFFER_BIT); // effacer le buffer de couleur
    MyGLWidget::paintGL();
    glClear(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);

}


// Fonction de redimensionnement
void MyGLWidget::resizeGL(int width, int height)
{
    // Definition du viewport (zone d'affichage)
    glViewport(0, 0, width, height);
}

// Fonction d'affichage
void MyGLWidget::paintGL()
{
    // ...
    // Affichage de la route
    // Affichage de la voiture
    myCar_.Display();

}


// Fonction de gestion d'interactions clavier
void MyGLWidget::keyPressEvent(QKeyEvent * event)
{
    switch(event->key())
    {
        // Cas par defaut
        default:
        {
            // Ignorer l'evenement
            event->ignore();
            return;
        }
    }

    // Acceptation de l'evenement et mise a jour de la scene
    event->accept();
    update();
}

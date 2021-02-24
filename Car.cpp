#include "Car.h"

Car::Car()
{
 couleur_carcasse_.setRgbF(0.0,0.0,0.0,0.5); // noir
 couleur_roues_.setRgbF(0.0,0.0,1.0,1.0);//bleu
}

Car::~Car()
{
}

void Car::Display() const
{

    // Reinitialisation de la matrice courante
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluLookAt(0,0,0,0,0,-6,0,0,1);
 //   glPushMatrix();
    glOrtho(-10, 10, -10, 10, 1.0, 10.0);
   // gluPerspective(70,4/3,0.1,7.0);

  //  glPopMatrix();

    // Affichage des primitives
   glBegin(GL_QUADS); // carcasse

    glClear(GL_COLOR_BUFFER_BIT); // nettoyage avec la couleur un peu plus haut
   // glColor3f(couleur_carcasse_.redF(),couleur_carcasse_.greenF(),couleur_carcasse_.blueF());

    glColor3f(1.0,0.0,0.0);

    glVertex3f(1.0,3.0,-5.0);
    glVertex3f(-1.0,3.0,-5.0);
    glVertex3f(-1.0,1.0,-5.0);
    glVertex3f(1.0,1.0,-5.0);


    glColor3f(1.0,0.4,0.0);

    glVertex3f(1.0,3.0,-7.0);
    glVertex3f(1.0,1.0,-7.0);
    glVertex3f(-1.0,1.0,-7.0);
    glVertex3f(-1.0,3.0,-7.0);

    glColor3f(0.0,1.0,0.0);

    glVertex3f(1.0,1.0,-7.0);
    glVertex3f(1.0,1.0,-5.0);
    glVertex3f(-1.0,1.0,-5.0);
    glVertex3f(-1.0,1.0,-7.0);

    glColor3f(0.0,0.0,1.0);

    glVertex3f(1.0,3.0,-7.0);
    glVertex3f(-1.0,3.0,-7.0);
    glVertex3f(-1.0,3.0,-5.0);
    glVertex3f(1.0,3.0,-5.0);

    glColor3f(0.6,0.0,1.0);

    glVertex3f(-1.0,3.0,-7.0);
    glVertex3f(-1.0,1.0,-7.0);
    glVertex3f(-1.0,1.0,-5.0);
    glVertex3f(-1.0,3.0,-5.0);

    glColor3f(0.4,0.1,1.0);

    glVertex3f(1.0,3.0,-7.0);
    glVertex3f(1.0,3.0,-5.0);
    glVertex3f(1.0,1.0,-5.0);
    glVertex3f(1.0,1.0,-7.0);

    glEnd();
    // roues
    glColor3f(1.0,1.0,1.0);
    GLUquadric * roue1= gluNewQuadric();
    gluQuadricDrawStyle(roue1,GLU_LINE);
    gluCylinder(roue1,70,7,25,50,50);
    glTranslatef(0.0,0.0,-5.0);
}

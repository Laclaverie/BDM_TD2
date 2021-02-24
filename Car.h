#ifndef CAR_H
#define CAR_H
#include <qopengl.h>
#include<QColor>
#include<GL/glu.h>

// Classe dediee pour la gestion de la voiture
class Car
{
public:
    // Constructeur avec parametres
    Car();

    // Destructeur
    ~Car();

    // Methode d'affichage
    void Display() const;
private:

    QColor couleur_carcasse_;// noir
    QColor couleur_roues_;
};

#endif

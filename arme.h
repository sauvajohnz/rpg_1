#ifndef ARME_H
#define ARME_H

#include <QString>

// modif à la con

class Arme
{
public:

    Arme(QString nom, int degats);
    ~Arme();

    int nombreDegats();
    void setNombreDegats(int degats);
    void setNomArme(QString nom);
    QString nomArme();

private:

    QString m_nom;
    int m_degats;

};

#endif // ARME_H

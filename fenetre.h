#ifndef FENETRE_H
#define FENETRE_H

#include <QWidget>
#include <QProgressBar>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QGridLayout>
#include "personnage.h"
#include "fenetreparametres.h"

class FenetrePrincipale : public QWidget

{

    Q_OBJECT

public :
    FenetrePrincipale();
    ~FenetrePrincipale();
    void setDegatsEnemi(int dgts);
    void majText(QString typeAction);
    void finTour();
    void debutTour();
    void estVivantActualiser();
    void estVivantDebut();

private slots:
    void attaquer();
    void regenerer();
    void attaquerEpee();
    void soinsUltimes();
private:

    Personnage *hero;
    Personnage *enemi;
    QPushButton *boutonAttaquer;
    QPushButton *boutonRegenerer;
    QPushButton  *boutonAttaqueEpee;
    QPushButton *boutonSoins;
    QGroupBox *menuActions;
    QProgressBar *progressBarHero;
    QProgressBar *progressBarEnemi;
    QLabel *texte1;
    QLabel *texte2;
    QTextEdit *infos;
    QString textEdit;
    FenetreParametres *fenetre2;

    QGridLayout *layoutBox;

    int degatsEnemi;
    int vieEnemi;

    int maxVie;
    int incr;
    int vieHero;
    int attaqueHero;
    QString nomHero;
    QString nomArmeHero;

    int incr2 = 10;
    int resIncr = 0;


};



#endif // FENETRE_H

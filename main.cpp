#include <QApplication>
#include "fenetre.h"
#include "personnage.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FenetrePrincipale fenetre;
    fenetre.show();

    return app.exec();

}

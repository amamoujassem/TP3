#include "tableaux.h"
#include <iostream>
int main() {
    vector<ville> villes = {
        {"Tunis", 36.8065, 10.1815},
        {"Sfax", 34.7406, 10.7603},
        {"Sousse", 35.8256, 10.6369},
        {"Gabes", 33.8815, 10.0982},
    };

    cout << "Liste des villes :\n";
    affichetableau(villes);

    cout << "\nTri des villes par nom :\n";
    trierTableauParNom(villes);
    affichetableau(villes);

    string recherche = "Sousse";
    rechercherVector(villes, recherche);
    return 0;
}
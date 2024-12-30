#ifndef TABLEAUX_H
#define TABLEAUX_H

#include <vector>
#include <string>
using namespace std;


struct ville {
    string nom;
    double longitude;
    double latitude;
};

void affichetableau(const vector<ville>& villes);
void trierTableauParNom(vector<ville>& villes);
void rechercherVector(const vector<ville>& villes, string& nom);

#endif

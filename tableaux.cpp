#include<iostream>
#include "tableaux.h"
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void affichetableau(const vector<ville> &villes){
    for(const auto &ville : villes){
        cout << "Ville : " << ville.nom
        << ", longitude : " << ville.longitude
        << ", latitude : " << ville.latitude << endl;
    }
}

void trierTableauParNom(vector<ville>& villes) {
    sort(villes.begin(), villes.end(), [](const ville& a, const ville& b) {
        return a.nom < b.nom;
    });
}
void rechercherVector(const vector<ville>& villes, string& nom){
    for (const auto &ville : villes){
        if(ville.nom==nom){
            cout << "Ville trouvee : " << ville.nom;
            cout << " - latitude : " << ville.latitude;
            cout << ", longitude : " << ville.longitude <<endl;
            return;
        }

    }
    cout << "Ville non trouvee" << endl;
}
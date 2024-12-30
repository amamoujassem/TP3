#include<iostream>
#include<string>
#include<vector>
#include <unordered_map>
#include <chrono>
using namespace std;

struct ville {
    string nom;
    double longitude;
    double latitude;
};
void rechercheVector(const vector<ville>& villes, string& nom){
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

void rechercheAvecMap(const unordered_map<string, ville>& villeMap, const string& nom) {
    auto vil = villeMap.find(nom);
    if (vil != villeMap.end()) {
        cout << "Ville trouvee : " << vil->second.nom
                  << " - Latitude: " << vil->second.latitude
                  << ", Longitude: " << vil->second.longitude <<endl;
    } else {
        cout << "Ville non trouvee.\n";
    }
}
int main(){
    vector<ville> villes = {
        {"Tunis", 36.8065, 10.1815},
        {"Sfax", 34.7406, 10.7603},
        {"Sousse", 35.8256, 10.6369},
        {"Gabes", 33.8815, 10.0982},
    };

    unordered_map<string, ville> villeMap;
    for (const auto& ville : villes) {
        villeMap[ville.nom] = ville;
    }

    string rechercheNom;
    cout << "Entrez le nom de la ville a rechercher : ";
    cin >> rechercheNom;

    auto debutVector = chrono::high_resolution_clock::now();
    rechercheVector(villes, rechercheNom);
    auto finVector = chrono::high_resolution_clock::now();

    auto debutMap = chrono::high_resolution_clock::now();
    rechercheAvecMap(villeMap, rechercheNom);
    auto finMap = chrono::high_resolution_clock::now();

    cout << "Temps avec vector : "
              << chrono::duration_cast<chrono::microseconds>(finVector - debutVector).count()
              << " microsecondes\n";

    cout << "Temps avec unordered_map : "
              << chrono::duration_cast<chrono::microseconds>(finMap - debutMap).count()
              << " microsecondes\n";

    return 0;   
}

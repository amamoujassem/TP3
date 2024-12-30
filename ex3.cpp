#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void remplir(vector<int> &vec1,vector<int> &vec2,int n){
    int val;
    vec1.resize(n);
    vec2.resize(n);
    for(int i=0; i<n; i++){
        cout << "Entrer la valeur pour l'indice " << i << " du vecteur 1 : ";
        cin >> val;
        vec1.push_back(val);
    }
    for(int i=0; i<n; i++){
        cout << "Entrer la valeur pour l'indice " << i << " du vecteur 2 : ";
        cin >> val;
        vec2.push_back(val);
    }
}

int produit_scalaire(vector<int> &vec1,vector<int> &vec2){
    int produit=0;
    for (int i = 0; i < vec1.size(); i++){
        produit=produit+(vec1[i]*vec2[i]);
    }
    return produit;
}
int main(){
    vector<int>vec1;
    vector<int>vec2;
    int n;
    cout<<"saisir la taille des vecteurs : "<<endl;
    cin>>n;
    remplir(vec1,vec2,n);
    cout<<"Le produit scalaire des deux vecteurs est : "<<produit_scalaire(vec1,vec2);
    return 0;


}
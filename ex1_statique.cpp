#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void remplir(int t[],int n){
    for(int i=0; i<n; i++){
        cout << "Entrer la valeur pour l'indice " << i << " : ";
        cin >> t[i];
    }
}
int nbpositive(int t[],int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(t[i] > 0)
            count++;
    }
    return count;
}   
int main(){
    int n;
    cout << "Entrer la taille du tableau : ";
    cin >> n;
    int t[n];
    remplir(t,n);
    cout << "Nombre de valeurs positives : " << nbpositive(t, n) << endl;
    return 0;
}
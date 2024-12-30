#include <iostream>
#include <array>
using std::cin;
using std::cout;
using std::endl;
using std::array;

void remplir(array<int ,100> &arr,int n){
    for(int i = 0; i <n; i++){
        cout << "Entrer la valeur pour l'indice " << i << " : ";
        cin >> arr[i];
    }
}

void recherche(array<int ,100>&arr,int n,int v){
    bool test = false;
    for (size_t i = 0; i <n; i++){
        if(arr[i] == v){
            cout << "La valeur " << v << " est a la position " << i << endl;
            test=true;
            break;
        }
    }
    if (test==false)
    cout << "La valeur " << v << " n'est pas dans le tableau" << endl;
}

int main(){
    int n;
    array<int, 100> arr;
    cout << "Entrer la taille du tableau : ";
    cin >> n;
    remplir(arr,n);
    int v;
    cout << "Entrer une valeur à rechercher : ";
    cin >> v;
    recherche(arr,n, v);
    return 0;
}

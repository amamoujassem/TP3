#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::vector;
using std::endl;
void remplir(vector<int> &vec,int n){
    int x;
    vec.resize(n);
    for(int i=0; i<n; i++){
        cout << "Entrez la valeur pour l'indice " << i << " : ";
        cin >> vec[i];
    }
}
void recherche(vector<int> &vec,int val){
    bool test=false;
    for(int i=0; i<vec.size();i++){
        if (vec[i]==val){
            cout<<val<<" est dans la position "<<i<<endl;
            test=true;
        }
    }
    if(!test) cout<<val<< " ne se trouve pas de le tableau"<<endl;
}
int main(){
    vector<int> vec;
    int n,val;
    cout<<"saisir la taille du tableau : "<<endl;
    cin>>n;
    remplir(vec,n);
    cout<<"saisir la valeur a rechercher : "<<endl;
    cin>>val;
    recherche(vec,val);
    return 0;
}
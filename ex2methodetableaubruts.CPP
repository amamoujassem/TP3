#include <iostream>
#include <array>
#include "ex2methodetableaubruts.h"
using std::cin;
using std::cout;
using std::endl;
using std::array;
void remplir(int t[],int n){
    for(int i=0;i<n;i++){
        cout<<"saisir la valeur "<<i<<":";
        cin>>t[i];
    }
}
void recherche(int t[],int n,int v){
    int i=-1;
    bool test=false;
    while(i<n && test==false){
        i++;
        if (t[i]==v)
            test=true;
    }
    if (test==false){
        cout<<v<<" ne se trouve pas dans le tableau"<<endl;
    }
    else
        cout<<v<<" se trouve dans la position : "<<i<<endl;
}
int main(){
    //methode des tableaux bruts
    cout<<"-----------methode des tableaux bruts----------"<<endl;
    int n,v;
    cout<<"saisir la taille du tableau"<<endl;
    cin>>n;
    int t[n];
    remplir(t,n);
    cout<<"saisir la valeur a rechercher dans le tableau"<<endl;
    cin>>v;
    recherche(t,n,v);
}

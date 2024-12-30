#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<tuple>
using std::tuple;
using std::cout;
using std::cin;
using std::endl;
using std::make_tuple;
void remplir(int t[],int n){
    for(int i=0;i<n;i++){
        cout<<"saisir la valeur "<<i<<":";
        cin>>t[i];
    }
}

tuple<int,int> mini_max(int a[],int n){
    int min = a[0];
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    return make_tuple(min, max);
}
int main(){
    int n;
    int a[100];
    cout << "Entrez la taille du tableau : ";
    cin >> n;
    remplir(a,n);
    tuple<int ,int> min_max = mini_max(a,n);
    cout << "Le minimum est : " << std::get<0>(min_max) << endl;
    cout << "Le maximum est : " << std::get<1>(min_max) << endl;
    return 0;

}
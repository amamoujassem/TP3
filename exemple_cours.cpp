# include <iostream>
# include <tuple>
# include <string>
using namespace std;
tuple<int ,int ,int> decomposer(string &g){
    int jour,mois,annee;
    jour=stoi(g.substr(0,2));
    mois=stoi(g.substr(3,5));
    annee=stoi(g.substr(6,9));
    return {jour,mois,annee};
}
int main(){
    string date;
    cout<<"entrer une date au format : ";
    cin>>date;
    auto [jour,mois,annee]=decomposer(date);
    cout<<"jour : "<<jour<<endl;
    cout<<"mois : "<<mois<<endl;
    cout<<"annee : "<<annee<<endl;
    return 0;
 
}
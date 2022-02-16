#include<iostream>
#include<vector>

using namespace std;

int main() {
    // On crée un vector contenant des entiers
    vector<int> v = {15, 3, 45, 9, 7};

    // On ajoute deux entiers au vector
    v.push_back(17);
    v.push_back(29);

    // On affiche les données du vector
    cout<<"v = { ";

    for(int i = 0 ; i < v.size() ; i++) {
        cout<<v.at(i);

        if(i < v.size() - 1) {
            cout<<", ";
        }
        else {
            cout<<" ";
        }
    }

    cout<<"}; \n";
}
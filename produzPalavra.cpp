#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool produz(string aux, vector<string> &vec, set<string> &erros){
   
    if(aux == "S")
        return true;

    string aux2, aux3;
    vector<string>::iterator it;
    set<string>::iterator itSet;

    for (int i = 0; i < aux.size(); i++)
    {   
        itSet = erros.find(aux);

        for (it = vec.begin(); it != vec.end(); it++)
        {   
            aux2 = *it;
            
            if (aux2.size() == 3)
            {
             if (aux[i] == aux2[2]){
                aux3 = aux;
                aux3[i] = aux2[0];
                if (itSet != erros.end())
                    return false;
                if (produz(aux3, vec, erros) == true)
                    return true;
                }
            }
                else 
                    if (aux[i] == aux2[2] && aux[i+1] == aux2[3])
                    {   
                        aux3 = aux;
                        aux3.insert(i+2, aux2, 0, 1);
                        aux3.erase(i, 2);
                        if (itSet != erros.end())
                            return false;
                        if (produz(aux3, vec, erros) == true)
                            return true;
                    }
       
        }
    }

    erros.insert(aux);
    return false;

}

int main() {
    
    int tam;
    cin >> tam;

    vector<string> linguagem;
    set<string> erros;

    string aux, aux2;
    string exp;

    while (tam > 0)
    {
        cin >> aux;
        cin >> aux2;
        cin >> aux2;

        exp = exp + aux + '/' + aux2;
        
        cout << exp;
        tam--;
        linguagem.push_back(exp);
        exp.clear();

        cout << '\n';
    }

    while (aux != "*")
    {
        cin >> aux;
        
        if(aux == "*")
            return 0;

        if (produz(aux, linguagem, erros) == true)
        cout << aux << ':' << " SIM";
        else
        cout << aux << ':' << " NAO";
        cout << "\n";
    }
    
    return 0;
}
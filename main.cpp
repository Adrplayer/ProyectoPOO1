#include <iostream>
#include <vector>

using namespace std;

vector <int> convertirBinario(vector <char> In);
bool comprobarCombinacion(vector <char In);
//int Suma(vector <int> In);
bool esPrimo(int numero);

int main(){
    vector <char> entrada;
    char n; 

    cout << "Bienvenido!\nContraseña: ('R'/'A')\n";

    for (int i = 0; i < 15; i++){
        
        do{
            cin >> n;
            if(n != 'A' && n != 'R'){
                cout << "Dato ingresado incompatible,\nvuelva a intentar";
            }
        }while(n != 'A' && n != 'R');

        entrada.push_back(n);
    }


    /*
     * if (!comprobarCombinacion(entrada)){
     *      cout << "Clave Incorecta!\n*se habre la trampa de lagartos*";
     * }else{
     *      vector <int> binario = convertirBinario(entrada);
     *
     *      int x = Suma(binario);
     */
           if (esPrimo(x)){
               cout << "Clave Correcta!\puede pasar";
           }else{
               cout << "Clave Incorecta!\n*se habre la trampa de lagartos*";
           }
     /* }
     
     */


}

vector <int> convertirBinario( vector <char> In){
    vector <int> Out;
    for (int j = 0; j < 15; j++){
        cout << In[j] << "\n";
        if(In[j] = 'R'){
            Out.push_back(1);
        }else{
            Out.push_back(0);
        }
    }
    return Out;
}

bool esPrimo( int numero){
    int cont= 0;
    for(int i=1; i<=numero; i++){
        if(numero%i==0)
            cont+=1;
    }
    if(cont<=2){
        return true;
    }else{
        return false;
    }
}

bool comprobarCombinacion(vector <char In){
    for (int i = 0; i <5 ; i ++){
        a = In[i];
        b = In[i+1];
        c = In[i+2];
    }
}

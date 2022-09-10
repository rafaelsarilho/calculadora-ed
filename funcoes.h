
// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a 
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado 

typedef struct {
    int a, b, resultado;
    char operacao;
} calculo;


// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico
calculo historico[5];
int contador = 0;

// Implemente a função soma:
int soma(int a, int b) {
    return a + b;
}

// Implemente a função subtracao:
int subtracao(int a, int b) {
    return a - b;
}

// Implemente a função multiplicacao:
int multiplicacao(int a, int b) {
    return a * b;
}

// Implemente a função divisao:
int divisao(int a, int b) {
    if (b == 0){
        return 0;
    }
    else {
        return a / b;
    }
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao) {
    int resultado;
    if(contador > 4){
        for(int i = 0; i <= 4; i ++){
            historico[i].a = historico[i+1].a;
            historico[i].operacao = historico[i+1].operacao;
            historico[i].b = historico[i+1].b;
            historico[i].resultado = historico[i+1].resultado;
        }
        contador = 4;
    }
    switch (operacao){
        case '+': {
            historico[contador].resultado = soma(a,b);
            historico[contador].a = a;
            historico[contador].b = b;
            historico[contador].operacao = operacao;
            resultado = historico[contador].resultado;
            break;
        }
        case '-': {
            historico[contador].resultado = subtracao(a,b);
            historico[contador].a = a;
            historico[contador].b = b;
            historico[contador].operacao = operacao;
            resultado = historico[contador].resultado;
            break;
        }
        case '*': {
            historico[contador].resultado = multiplicacao(a,b);
            historico[contador].a = a;
            historico[contador].b = b;
            historico[contador].operacao = operacao;
            resultado = historico[contador].resultado;
            break;
        }
        case '/': {
            historico[contador].resultado = divisao(a,b);
            historico[contador].a = a;
            historico[contador].b = b;
            historico[contador].operacao = operacao;
            resultado = historico[contador].resultado;
            break;
        }
    }
    contador++;
return resultado;
}

// Implemente a função limpaHistorico:
int limpaHistorico() {
    contador = 0;
    return 1;
}

// Implemente a função listaHistorico:
string listaHistorico()
{
    string saida;
    if (contador == 0){
        saida = "\0";
    }
    else {
        saida = "\0";
        for (int i = (contador-1); i>=0; i--){
            if (i == (contador-1)){
                saida = to_string(historico[i].a);
                saida += " ";
                saida += historico[i].operacao;
                saida += " ";
                saida += to_string(historico[i].b);
                saida += " = ";
                saida += to_string(historico[i].resultado);
                saida += "\n";
           }
           else {
                saida += to_string(historico[i].a);
                saida += " ";
                saida += historico[i].operacao;
                saida += " ";
                saida += to_string(historico[i].b);
                saida += " = ";
                saida += to_string(historico[i].resultado);
                saida += "\n";
           }     
        }
    }
    return saida;
}
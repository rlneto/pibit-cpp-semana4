#include <iostream>
#include <locale>

float calculaArea(float raio);
float calculaArea(float lado1, float lado2);

float verifica(float saldo, float valor);
float debita(float &saldo, float valor);

int fibonacci(int termos);

using namespace std;

const float PI = 3.14159265359;

int main() {
  setlocale(LC_ALL, "portuguese");
  cout << "== Demonstrando function overload em C++ ==" << endl << "Serão usados métodos com a mesma chamada, calculaArea, para definir o cálculo a ser efetuado com base na passagem de parâmetros." << endl;
  cout << "Informe o raio de um círculo para calcular sua área: ";
  float raio;
  cin >> raio;
  cout << endl << "Agora informe os dois lados de um quadrilátero para calcular sua área." << endl << "Lado 1: ";
  float lado1;
  float lado2;
  cin >> lado1;
  cout << endl << "Lado 2: ";
  cin >> lado2;
  cout << endl << "A área círculo é: " << calculaArea(raio) << endl << "A área do quadrado é: " << calculaArea(lado1, lado2) << endl;

  cout << endl << "== Demonstrando passagem por valor e passagem por referência ==" << endl;
  float saldo;
  cout << "Informe o saldo de uma conta bancária qualquer: ";
  cin >> saldo;
  cout << endl << "Agora informe o valor a ser debitado: ";
  float debito;
  cin >> debito;
  cout << endl << "Em uma passagem por valor, o valor do saldo após debitar seria de " << verifica(saldo, debito) << " R$, mas ainda é de " << saldo << " R$." << endl << "Porém em uma passagem por referência, o valor é de " << debita(saldo, debito) << " R$ e o saldo agora é de " << saldo << " R$ mesmo.";

  cout << endl << endl << "== Demonstrando recursividade ==" << endl;
  cout << "Faltou criatividade para imaginar algo menos padrão que séries de Fibonacci, então vamos voltar pra introdução à informática e usar Fibonacci mesmo." << endl;
  int termos;
  cout << "Informe o número de termos da série de Fibonacci: ";
  cin >> termos;
  cout << endl << "Calculando a série, isso pode levar um bom tempo se o número de termos for suficiente grande (ou não, afinal aqui temos C++)..." << endl;
  cout << "O somatório da série para " << termos << " termos é de " << fibonacci(termos) << endl;

}

float calculaArea(float raio) {
  return PI * raio * raio;
}
float calculaArea(float lado1, float lado2) {
  return lado1 * lado2;
}

float verifica(float saldo, float valor) {
  saldo -= valor;
  return saldo;
}
float debita(float &saldo, float valor) {
  saldo -= valor;
  return saldo;
}

int fibonacci(int termos) {
  if (termos == 1 || termos == 2) {
    return 1;
  } else {
    return fibonacci(termos - 1) + fibonacci(termos - 2);
  }
}

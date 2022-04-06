#include<stdio.h>
#include<locale.h>

/* 01: O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura2 */ 

void main (){

setlocale(LC_ALL, "Portuguese");
//variaveis 
float imc, calc, peso, altura;

printf("Digite sua Altura: ");
scanf("%f", &altura);

printf("Digite seu Peso: ");
scanf("%f", &peso);

// calculo do IMC
altura = altura * altura;
imc = peso / altura;

/*
if (imc < 18.5){
    printf("Voc� est� abaixo do peso");
}
else if (( imc <= 18.0)  ||  (imc < 25.0)) {
    printf("Voc� est� com o peso ideal");
}
else if ((imc <= 25.0) || (imc < 30.0)) {
    printf("Voc� est� com sobrepeso");
}
else if ((imc <= 30.0) || (imc < 35.0)) {
    printf("Obesidade Grau I");
}
else if ((imc <= 35.0) ||  (imc < 40.0)) {
    printf("Obesidade Grau II");
}
else if ((imc <= 40.0) || (imc < 45.0)) {
    printf("Obesidade Grau III");
}
*/

printf("%.2f", imc);



}

// converter.h
#ifndef CONVERTER_H
#define CONVERTER_H

// Função para exibir o menu de opções
void exibirMenu();

// Função para obter o fator de conversão para metros quadrados
double obterFator(int escolha);

// Função para obter o nome da unidade com base na escolha
const char* obterNomeUnidade(int escolha);

#endif // CONVERTER_H
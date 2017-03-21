/**
 * @file	sequencia.h
 * @brief	Arquivo cabeçalho com a implementacao de funcoes que calculam as 
 			sequências descritas no laboratório
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

 #ifndef SEQUENCIA_H
#define SEQUENCIA_H

#include <iostream> 
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
using std::pow;

/**
 * @brief Calcula a sequência A recursivamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaARecursiva(float n);

/**
 * @brief Calcula a sequência A iterativamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaAIterativa(float n);

/**
 * @brief Calcula a sequência B recursivamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaBRecursiva(float n);

/**
 * @brief Calcula a sequência B iterativamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaBIterativa(float n);

#endif
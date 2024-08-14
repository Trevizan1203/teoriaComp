# Verificador de Cadeias em Gramática Livre de Contexto

Este projeto é uma implementação em C++ de um verificador de cadeias para uma gramática livre de contexto (GLC). O objetivo é determinar se uma string pode ser gerada a partir de uma gramática definida por um conjunto de produções fornecidas.

## Funcionalidades

- **Leitura de Produções:** O programa aceita produções na forma `A/B`, onde `A` é um símbolo não-terminal e `B` é a produção correspondente.
- **Verificação de Cadeias:** O usuário pode inserir strings para verificar se elas podem ser derivadas a partir do símbolo inicial "S" usando as produções fornecidas.
- **Eficiência:** Utiliza uma abordagem recursiva com memoização para evitar cálculos redundantes e melhorar a performance.

## Como Funciona

1. **Entrada da Gramática:**
   - O usuário insere um número de produções, cada uma no formato `A/B`.
   - As produções são armazenadas para posterior uso na verificação de strings.

2. **Verificação de Strings:**
   - Após definir a gramática, o usuário pode inserir strings a serem verificadas.
   - A função `produz` é utilizada para determinar se a string pode ser gerada pela gramática. O resultado é exibido como "SIM" ou "NAO".

3. **Memorização:**
   - Strings que não podem ser produzidas são armazenadas em um conjunto para evitar processamento repetido e melhorar a eficiência.

### Entrada

- **Produções:** Insira o número de produções e, em seguida, cada produção no formato `A/B`.
- **Strings:** Insira strings para verificar se podem ser geradas pela gramática. O programa irá retornar "SIM" ou "NAO" para cada string.
- **Encerramento:** Para encerrar a verificação de strings, insira `*`.

## Exemplo

**Entrada:**
```
3
S/aA
A/bB
B/c
abc
a
*
```

**Saída:**
```
abc: SIM
a: NAO
```

## Contribuições

Contribuições são bem-vindas! Se você encontrar bugs ou quiser adicionar melhorias, sinta-se à vontade para abrir uma issue ou pull request.

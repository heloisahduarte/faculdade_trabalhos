# Super Trunfo de Países - Versão 2.0

## 📋 Descrição

Programa em C que implementa um jogo de Super Trunfo com temática de países. O programa permite ao usuário inserir informações sobre dois países, calcula métricas econômicas e demográficas avançadas, e compara as cartas de forma automática.

## 🎯 Funcionalidades

- ✅ Leitura de dados para duas cartas de jogo
- ✅ Coleta de informações: Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos
- ✅ Exibição formatada das cartas com todos os dados inseridos
- ✅ Suporte para nomes de cidades e estados com espaços
- ✅ Cálculo de **Densidade Populacional** (hab/km²)
- ✅ Cálculo de **PIB per Capita** (reais por habitante)
- ✅ Cálculo de **Super Poder** (métrica combinada)
- ✅ Comparação automática entre as duas cartas em 7 categorias diferentes
- ✅ Exibição de cartas vencedoras para cada atributo

## 📦 Dados Coletados por Carta

Para cada carta, o programa solicita:

| Campo | Tipo | Descrição |
|-------|------|-----------|
| Estado | Texto (50 caracteres) | Nome do estado/província |
| Código | Texto (10 caracteres) | Código identificador da carta |
| Nome da Cidade | Texto (50 caracteres) | Nome da cidade principal |
| População | Inteiro Grande (unsigned long) | Número de habitantes |
| Área | Float | Tamanho em km² |
| PIB | Float | Produto Interno Bruto em bilhões |
| Ponto Turístico | Inteiro | Quantidade de atrações turísticas |

## 📊 Métricas Calculadas

Para cada carta, o programa calcula automaticamente:

| Métrica | Fórmula | Descrição |
|---------|---------|-----------|
| Densidade Populacional | População ÷ Área | Habitantes por km² |
| PIB per Capita | PIB ÷ População | Renda média por habitante |
| Super Poder | Soma ponderada de todos os atributos | Score combinado para comparação |

## 🚀 Como Compilar e Executar

### Com GCC (recomendado no Windows com MinGW)
```bash
gcc -o super_trunfo super_trunfo.c
./super_trunfo.exe
```

### Com MSVC (Visual C++)
```bash
cl.exe /Fe:super_trunfo.exe super_trunfo.c
super_trunfo.exe
```

## 💻 Exemplo de Uso

```
Cartas do Super Trunfo de Países:

Forneça as seguintes informações para a PRIMEIRA CARTA:

Estado: 
São Paulo
Código: 
SP001
Nome da Cidade: 
São Paulo
População: 
12000000
Area (em km²): 
248.2
PIB (em bilhões): 
2100.50
Ponto Turístico: 
45

Forneça as seguintes informações para a SEGUNDA CARTA:

Estado: 
Rio de Janeiro
Código: 
RJ001
Nome da Cidade: 
Rio de Janeiro
População: 
6320000
Area (em km²): 
1200.5
PIB (em bilhões): 
800.00
Ponto Turístico: 
35

Carta 1:
Estado: São Paulo
Código: SP001
Nome da Cidade: São Paulo
População: 12000000
Área: 248.20 km²
PIB: 2100.50 bilhões de reais
Número de Ponto Turístico: 45

Carta 2:
Estado: Rio de Janeiro
Código: RJ001
Nome da Cidade: Rio de Janeiro
População: 6320000
Área: 1200.50 km²
PIB: 800.00 bilhões de reais
Número de Ponto Turístico: 35

Valores Calculados:

Carta 1 - Densidade Populacional: 48.35 hab/km²
Carta 1 - PIB per Capita: 0.175042 reais
Carta 1 - Super Poder: 14164505.17

Carta 2 - Densidade Populacional: 5.27 hab/km²
Carta 2 - PIB per Capita: 0.126582 reais
Carta 2 - Super Poder: 6326502.83

Comparação de Cartas:

População: Carta 1 venceu (1)
Área: Carta 2 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (1)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
```

## 📝 Estrutura do Código

O programa está organizado em cinco seções principais:

1. **Declaração de Variáveis** - Define todas as variáveis necessárias para armazenar dados de duas cartas
2. **Entrada de Dados - Primeira Carta** - Solicita informações do usuário para a primeira carta
3. **Entrada de Dados - Segunda Carta** - Solicita informações do usuário para a segunda carta
4. **Exibição de Dados** - Apresenta os dados formatados e calcula métricas (Densidade, PIB per Capita, Super Poder)
5. **Comparação e Ranking** - Compara as cartas em todas as categorias e exibe vencedores

## ⚙️ Requisitos

- Compilador C (GCC, MSVC ou similar)
- Windows, Linux ou macOS
- Conhecimento básico de C e entrada/saída

## 📚 Conceitos Utilizados

- Variáveis de diferentes tipos (char, int, unsigned long int, float)
- Arrays de caracteres (strings)
- Função `scanf()` para entrada de dados
- Função `printf()` para saída de dados
- Formatação de saída com especificadores de formato
- Operações aritméticas para cálculos matemáticos
- Operador ternário (? :) para comparações
- Variáveis booleanas (int) para armazenar resultados de comparações

## 🔧 Notas de Implementação

- O programa usa `scanf(" %49[^\n]")` para permitir leitura de strings com espaços
- Os tamanhos dos arrays foram definidos com margem de segurança para evitar buffer overflow
- Os valores de PIB e Área são exibidos com 2 casas decimais (%.2f)
- População utiliza `unsigned long int` para suportar valores maiores
- Densidade Populacional usa casting para float para cálculos precisos
- PIB per Capita é exibido com 6 casas decimais para precisão
- Comparações usam operador ternário (?) sem estruturas condicionais (if/while)
- A categoria de Densidade Populacional inverte a lógica (menor é melhor)

## 👥 Autor

Heloisa Duarte  
Data: 09/02/2026 (última atualização)

## 📖 Disciplina

Introdução à Programação de Computadores - Desafio Nível Avançado (Versão 2.0)

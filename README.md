# Super Trunfo de Países

## 📋 Descrição

Programa em C que implementa a criação de cartas para um jogo de Super Trunfo com temática de países. O programa permite ao usuário inserir informações sobre dois países e exibe as cartas formatadas.

## 🎯 Funcionalidades

- ✅ Leitura de dados para duas cartas de jogo
- ✅ Coleta de informações: Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos
- ✅ Exibição formatada das cartas com todos os dados inseridos
- ✅ Suporte para nomes de cidades e estados com espaços

## 📦 Dados Coletados por Carta

Para cada carta, o programa solicita:

| Campo | Tipo | Descrição |
|-------|------|-----------|
| Estado | Texto (50 caracteres) | Nome do estado/província |
| Código | Texto (10 caracteres) | Código identificador da carta |
| Nome da Cidade | Texto (50 caracteres) | Nome da cidade principal |
| População | Inteiro | Número de habitantes |
| Área | Float | Tamanho em km² |
| PIB | Float | Produto Interno Bruto em bilhões |
| Ponto Turístico | Inteiro | Quantidade de atrações turísticas |

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

Carta 1:
Estado :São Paulo
Código :SP001
Nome da Cidade :São Paulo
População :12000000
Área :248.20 km²
PIB :2100.50 bilhões de reais
Número de Ponto Turístico :45
```

## 📝 Estrutura do Código

O programa está organizado em três seções principais:

1. **Declaração de Variáveis** - Define todas as variáveis necessárias para armazenar dados de duas cartas
2. **Entrada de Dados** - Solicita informações do usuário para ambas as cartas (Carta 1 e Carta 2)
3. **Exibição de Dados** - Apresenta os dados formatados para ambas as cartas

## ⚙️ Requisitos

- Compilador C (GCC, MSVC ou similar)
- Windows, Linux ou macOS
- Conhecimento básico de C e entrada/saída

## 📚 Conceitos Utilizados

- Variáveis de diferentes tipos (char, int, float)
- Arrays de caracteres (strings)
- Função `scanf()` para entrada de dados
- Função `printf()` para saída de dados
- Formatação de saída com especificadores de formato

## 🔧 Notas de Implementação

- O programa usa `scanf(" %49[^\n]")` para permitir leitura de strings com espaços
- Os tamanhos dos arrays foram definidos com margem de segurança para evitar buffer overflow
- Os valores de PIB e Área são exibidos com 2 casas decimais (%.2f)

## 👥 Autor

Heloisa Duarte  
Data: 02/02/2026

## 📖 Disciplina

Introdução à Programação de Computadores - Desafio Nível Novato

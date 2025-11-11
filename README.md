# 🔐 Cifra de Vigenère — Implementação em C

Este repositório contém a implementação da **Cifra de Vigenère**, um algoritmo clássico de criptografia por substituição polialfabética.
Este projeto foi desenvolvido como parte dos meus estudos em **Algoritmos, C e Criptografia** durante a facul de **Análise e Desenvolvimento de Sistemas** ⭐

---

## 🧠 O que é a Cifra de Vigenère?

A Cifra de Vigenère funciona aplicando **deslocamentos diferentes** ao texto original (mensagem) usando uma palavra-chave.  
Cada letra da chave determina de quanto a letra correspondente da mensagem será deslocada no alfabeto.

É como se cada letra usasse **uma Cifra de César diferente**.

| Mensagem | A  | N  | A  | L  | I  | S  |
|---------|----|----|----|----|----|----|
| Chave   | C  | H  | A  | V  | E  | C  |
| Desloc. | 2  | 7  | 0  | 21 | 4  | 2  |
| Cript.  | C  | U  | A  | G  | M  | U  |

Resultado: **CUAGMU**

Simples e elegante 💜

---

## 🗂 Estrutura do Projeto
```
📁 Cifra_de_Vigenere/
├── Cifra_de_Vigenere.c            # Código fonte em C
├── CMakeLists.txt                 # Configuração para compilação via CLion / CMake
└── README.md                      # Este arquivo fofo ✨
```


Arquivos gerados automaticamente como:
- `.idea/`
- `cmake-build-debug/`
- `.exe` compilados

…não estão no repositório graças ao `.gitignore`, porque queremos um ambiente **limpo e profissional** 🧼

---

## 💻 Como compilar

### No CLion (mais fácil):
É só abrir o projeto → clicar no botão **Run** ▶️  
O CLion configura tudo sozinho 🔮

### Pelo terminal:
```bash
gcc Cifra_de_Vigenere.c -o vigenere
./vigenere
```
---

## ✨ Exemplo de uso
- Digite a mensagem: ATAQUEAMANHA
- Digite a chave: CHAVE
- Texto criptografado: CUAGMUQXPRVE

## 🌱 Objetivo do Projeto
- Fortalecer lógica de programação em C
- Aprender e praticar criptografia clássica
- Versionar e organizar meus estudos no GitHub
- Criar um repositório fofo e útil ao mesmo tempo 💞

## 🎀 Feito com carinho por: @yumekojulia
- 🌙 aprendendo, evoluindo e guardando conhecimento com cuidado.

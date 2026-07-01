# Luan e o Time de Treinamento

## Enunciado

Luan está treinando para competições de programação com seus três amigos: **Erik**, **Sandoval** e **Genival**.

Antes de resolverem uma lista de questões, eles combinaram a seguinte regra:

Uma questão será resolvida pelo grupo se:

1. **Pelo menos dois dos três amigos souberem resolver a questão**;
2. E, além disso, a questão **não for considerada muito arriscada**.

Cada questão possui quatro informações:

```txt
e s g p
```

Onde:

- `e` vale `1` se **Erik** sabe resolver a questão, e `0` caso contrário;
- `s` vale `1` se **Sandoval** sabe resolver a questão, e `0` caso contrário;
- `g` vale `1` se **Genival** sabe resolver a questão, e `0` caso contrário;
- `p` representa o nível de risco da questão:
  - `0` significa risco baixo;
  - `1` significa risco médio;
  - `2` significa risco alto.

O grupo só resolve a questão se **pelo menos dois amigos souberem resolvê-la** e o risco **não for alto**.

Ajude Luan a descobrir quantas questões o grupo irá resolver.

---

## Entrada

A primeira linha contém um inteiro `n` `(1 ≤ n ≤ 1000)`, representando a quantidade de questões.

As próximas `n` linhas contêm quatro inteiros `e`, `s`, `g` e `p`.

Cada um dos três primeiros valores será `0` ou `1`.

O valor `p` será `0`, `1` ou `2`.

---

## Saída

Imprima um único inteiro: a quantidade de questões que o grupo de Luan irá resolver.

---

## Exemplo 1

### Entrada

```txt
5
1 1 0 0
1 0 1 2
1 1 1 1
0 1 0 0
0 1 1 2
```

### Saída

```txt
2
```

### Explicação

Analisando cada questão:

```txt
1 1 0 0
```

Erik e Sandoval sabem resolver. São 2 pessoas confiantes. O risco é baixo.  
Então o grupo resolve.

```txt
1 0 1 2
```

Erik e Genival sabem resolver. São 2 pessoas confiantes. Porém o risco é alto.  
Então o grupo não resolve.

```txt
1 1 1 1
```

Os três sabem resolver. O risco é médio.  
Então o grupo resolve.

```txt
0 1 0 0
```

Apenas Sandoval sabe resolver. Não é suficiente.  
Então o grupo não resolve.

```txt
0 1 1 2
```

Sandoval e Genival sabem resolver, mas o risco é alto.  
Então o grupo não resolve.

Resposta final: `2`.

---

## Exemplo 2

### Entrada

```txt
3
1 1 0 0
1 0 0 0
1 1 1 2
```

### Saída

```txt
1
```

### Explicação

Apenas a primeira questão será resolvida.

- Na primeira, Erik e Sandoval sabem resolver, e o risco é baixo.
- Na segunda, apenas Erik sabe resolver.
- Na terceira, todos sabem resolver, mas o risco é alto.

---

## Exemplo 3

### Entrada

```txt
6
1 1 1 0
1 1 1 1
1 1 1 2
1 0 1 0
0 1 1 2
0 0 1 1
```

### Saída

```txt
3
```

### Explicação

As questões resolvidas são:

```txt
1 1 1 0
1 1 1 1
1 0 1 0
```

A questão `1 1 1 2` não é resolvida porque o risco é alto.  
A questão `0 1 1 2` também não é resolvida pelo mesmo motivo.  
A questão `0 0 1 1` não é resolvida porque apenas Genival sabe resolver.

---

# Casos de Teste Extras

## Caso 1 — Caso mínimo que resolve

### Entrada

```txt
1
1 1 0 0
```

### Saída esperada

```txt
1
```

---

## Caso 2 — Caso mínimo que não resolve

### Entrada

```txt
1
1 0 0 0
```

### Saída esperada

```txt
0
```

---

## Caso 3 — Todos sabem, mas o risco é alto

### Entrada

```txt
1
1 1 1 2
```

### Saída esperada

```txt
0
```

---

## Caso 4 — Todas as combinações com risco baixo

### Entrada

```txt
8
0 0 0 0
1 0 0 0
0 1 0 0
0 0 1 0
1 1 0 0
1 0 1 0
0 1 1 0
1 1 1 0
```

### Saída esperada

```txt
4
```

---

## Caso 5 — Todas as combinações com risco alto

### Entrada

```txt
8
0 0 0 2
1 0 0 2
0 1 0 2
0 0 1 2
1 1 0 2
1 0 1 2
0 1 1 2
1 1 1 2
```

### Saída esperada

```txt
0
```

---

## Caso 6 — Risco médio também é permitido

### Entrada

```txt
5
1 1 0 1
1 0 1 1
0 1 1 1
1 1 1 1
1 0 0 1
```

### Saída esperada

```txt
4
```

---

## Caso 7 — Misturado completo

### Entrada

```txt
10
1 1 0 0
1 0 1 2
1 1 1 1
0 1 0 0
0 1 1 2
1 0 1 0
0 0 0 1
1 1 0 2
0 1 1 1
1 1 1 2
```

### Saída esperada

```txt
4
```

---

## Caso 8 — Só risco alto com gente confiante

### Entrada

```txt
6
1 1 0 2
1 0 1 2
0 1 1 2
1 1 1 2
1 1 0 2
0 1 1 2
```

### Saída esperada

```txt
0
```

---

## Caso 9 — Ninguém sabe nada

### Entrada

```txt
4
0 0 0 0
0 0 0 1
0 0 0 2
0 0 0 0
```

### Saída esperada

```txt
0
```

---

## Caso 10 — Todos sabem, alternando risco

### Entrada

```txt
6
1 1 1 0
1 1 1 1
1 1 1 2
1 1 1 0
1 1 1 2
1 1 1 1
```

### Saída esperada

```txt
4
```

---

## Caso 11 — Bateria maior

### Entrada

```txt
20
1 1 0 0
1 0 0 0
1 1 1 2
0 1 1 1
1 0 1 0
0 0 0 1
1 1 0 2
1 1 1 1
0 1 0 2
0 1 1 0
1 0 1 2
1 1 0 1
0 0 1 0
1 1 1 0
0 0 0 2
0 1 1 2
1 0 0 1
1 0 1 1
0 1 0 0
1 1 1 2
```

### Saída esperada

```txt
8
```

---

# Modelo de Resolução

Para resolver a questão, basta percorrer as `n` linhas, somar os três primeiros valores e verificar o risco.

A questão será contada se:

```cpp
e + s + g >= 2 && p != 2
```

Ou seja:

- `e + s + g >= 2`: pelo menos dois amigos sabem resolver;
- `p != 2`: a questão não possui risco alto.

---

# Solução em C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int resposta = 0;

    for (int i = 0; i < n; i++) {
        int e, s, g, p;
        cin >> e >> s >> g >> p;

        int confiantes = e + s + g;

        if (confiantes >= 2 && p != 2) {
            resposta++;
        }
    }

    cout << resposta << endl;

    return 0;
}
```

---

# Complexidade

Para cada uma das `n` questões, fazemos apenas operações constantes.

Logo:

```txt
Tempo: O(n)
Memória: O(1)
```

---

# Habilidades Treinadas

Esta questão treina:

- leitura de entrada com múltiplas linhas;
- uso de acumulador;
- soma de flags `0` e `1`;
- condicionais compostas;
- operador lógico `&&`;
- diferença entre `>= 2` e `> 2`;
- filtragem com uma regra extra;
- raciocínio semelhante ao problema clássico **A. Team**, porém com uma condição adicional.


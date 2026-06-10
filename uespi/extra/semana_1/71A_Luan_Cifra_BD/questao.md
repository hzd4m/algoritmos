# Luan e o Codificador da UESPI

## Tags

`strings` `condicionais` `simulação` `cifra simples` `abreviação` `manipulação de caracteres` `iniciante-plus`

---

## Enunciado

Luan, estudante da **UESPI**, está criando um pequeno codificador de palavras para organizar os termos do seu banco de questões.

Ele gostou da ideia de abreviar palavras muito longas, mas decidiu adicionar uma camada de criptografia simples para deixar o treino mais interessante.

Para cada palavra recebida, Luan deve aplicar as seguintes regras, nesta ordem:

1. Se a palavra tiver tamanho **maior que 10**, ela deve ser abreviada.
2. Se a palavra tiver tamanho **menor ou igual a 10**, ela permanece como está.
3. Depois disso, uma cifra simples deve ser aplicada de acordo com o tamanho da **palavra original**.

A abreviação funciona assim:

- Escreva a primeira letra da palavra;
- Depois escreva a quantidade de letras entre a primeira e a última;
- Por fim, escreva a última letra da palavra.

Por exemplo:

```txt
localization
```

tem 12 letras. Entre a primeira e a última letra existem 10 letras.

Então ela vira:

```txt
l10n
```

Depois da abreviação ou manutenção da palavra original, Luan aplica a cifra da UESPI:

- Se o tamanho da **palavra original** for par, cada letra do resultado anda uma posição no alfabeto.
  - `a` vira `b`;
  - `b` vira `c`;
  - ...
  - `z` vira `a`.
  - Números não mudam.
- Se o tamanho da **palavra original** for ímpar, o resultado deve ser invertido.

Ajude Luan a codificar todas as palavras.

---

## Entrada

A primeira linha contém um inteiro `n` `(1 ≤ n ≤ 100)`, representando a quantidade de palavras.

As próximas `n` linhas contêm uma palavra cada.

Cada palavra contém apenas letras minúsculas do alfabeto inglês e possui tamanho entre `1` e `100`.

---

## Saída

Imprima `n` linhas.

A i-ésima linha deve conter a palavra codificada correspondente à i-ésima palavra da entrada.

---

## Exemplo 1

### Entrada

```txt
5
word
localization
internationalization
algoritmo
pneumonoultramicroscopicsilicovolcanoconiosis
```

### Saída

```txt
xpse
m10o
j18o
omtirogla
s34p
```

### Explicação

#### Palavra 1

```txt
word
```

A palavra possui 4 letras, então não é abreviada.

Como o tamanho original é par, cada letra anda uma posição:

```txt
word -> xpse
```

#### Palavra 2

```txt
localization
```

A palavra possui 12 letras, então é abreviada:

```txt
localization -> l10n
```

Como o tamanho original é par, as letras andam uma posição. Os números continuam iguais:

```txt
l10n -> m10o
```

#### Palavra 3

```txt
internationalization
```

A palavra possui 20 letras, então é abreviada:

```txt
internationalization -> i18n
```

Como o tamanho original é par:

```txt
i18n -> j18o
```

#### Palavra 4

```txt
algoritmo
```

A palavra possui 9 letras, então não é abreviada.

Como o tamanho original é ímpar, a palavra é invertida:

```txt
algoritmo -> omtirogla
```

#### Palavra 5

```txt
pneumonoultramicroscopicsilicovolcanoconiosis
```

A palavra possui 45 letras, então é abreviada:

```txt
pneumonoultramicroscopicsilicovolcanoconiosis -> p43s
```

Como o tamanho original é ímpar, o resultado é invertido:

```txt
p43s -> s34p
```

---

## Exemplo 2

### Entrada

```txt
5
uespi
programacao
computadores
z
zzzzzzzzzz
```

### Saída

```txt
ipseu
o9p
d10t
z
aaaaaaaaaa
```

### Explicação

- `uespi` tem tamanho 5, então é invertida: `ipseu`.
- `programacao` tem tamanho 11, então vira `p9o`, e depois é invertida: `o9p`.
- `computadores` tem tamanho 12, então vira `c10s`, e depois as letras avançam: `d10t`.
- `z` tem tamanho 1, então invertida continua `z`.
- `zzzzzzzzzz` tem tamanho 10, então não abrevia. Como o tamanho é par, cada `z` vira `a`.

---

## Exemplo 3

### Entrada

```txt
4
erik
sandoval
genival
luan
```

### Saída

```txt
fsjl
tboepwbm
lavineg
mvbo
```

---

# Casos de Teste Extras

## Caso 1 — Menor palavra possível

### Entrada

```txt
1
a
```

### Saída esperada

```txt
a
```

---

## Caso 2 — Palavra curta com tamanho par

### Entrada

```txt
1
ab
```

### Saída esperada

```txt
bc
```

---

## Caso 3 — Palavra com exatamente 10 letras

### Entrada

```txt
1
abcdefghij
```

### Saída esperada

```txt
bcdefghijk
```

A palavra não é abreviada, pois só abreviamos quando o tamanho é **maior que 10**.

---

## Caso 4 — Palavra com 11 letras

### Entrada

```txt
1
abcdefghijk
```

### Saída esperada

```txt
k9a
```

A palavra vira `a9k`. Como o tamanho original é ímpar, o resultado é invertido.

---

## Caso 5 — Palavra longa com letra `z`

### Entrada

```txt
1
zzzzzzzzzzzz
```

### Saída esperada

```txt
a10a
```

A palavra tem 12 letras, então vira `z10z`. Como o tamanho original é par, cada `z` vira `a`.

---

## Caso 6 — Mistura de palavras curtas e longas

### Entrada

```txt
5
banana
abacaxi
universidade
piaui
tecnologia
```

### Saída esperada

```txt
cbobob
ixacaba
v10f
iuaip
ufdopmphjb
```

---

## Caso 7 — Palavras clássicas do problema original

### Entrada

```txt
3
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

### Saída esperada

```txt
m10o
j18o
s34p
```

---

## Caso 8 — Testando rotação da letra `z`

### Entrada

```txt
4
z
zz
zzzzzzzzzz
zzzzzzzzzzz
```

### Saída esperada

```txt
z
aa
aaaaaaaaaa
z9z
```

---

## Caso 9 — Personagens do treino

### Entrada

```txt
5
erik
sandoval
genival
luan
uespi
```

### Saída esperada

```txt
fsjl
tboepwbm
lavineg
mvbo
ipseu
```

---

## Caso 10 — Bateria temática

### Entrada

```txt
5
criptografia
beecrowd
codeforces
condicionais
strings
```

### Saída esperada

```txt
d10b
cffdspxe
dpefgpsdft
d10t
sgnirts
```

---

# Modelo de Resolução

A solução pode ser separada em duas etapas para cada palavra.

## Etapa 1 — Criar o resultado base

Se a palavra tiver mais de 10 caracteres:

```cpp
resultado = primeira_letra + quantidade_do_meio + ultima_letra;
```

Em C++, podemos fazer:

```cpp
resultado = palavra[0] + to_string(tamanho - 2) + palavra[tamanho - 1];
```

Se a palavra tiver 10 caracteres ou menos:

```cpp
resultado = palavra;
```

## Etapa 2 — Aplicar a cifra da UESPI

Agora usamos o tamanho da palavra original.

Se o tamanho original for par:

- percorremos cada caractere do resultado;
- se for letra, avançamos uma posição;
- se for número, deixamos igual.

Se o tamanho original for ímpar:

- invertemos o resultado.

---

# Atenção para a Pegadinha

A paridade deve ser verificada usando o tamanho da **palavra original**, e não o tamanho da abreviação.

Por exemplo:

```txt
programacao
```

tem 11 letras.

Primeiro ela vira:

```txt
p9o
```

Depois, como o tamanho original era ímpar, o resultado é invertido:

```txt
o9p
```

Não devemos olhar para o tamanho de `p9o`.

---

# Solução em C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string palavra;
        cin >> palavra;

        int tamanho = palavra.size();
        string resultado;

        if (tamanho > 10) {
            resultado = "";
            resultado += palavra[0];
            resultado += to_string(tamanho - 2);
            resultado += palavra[tamanho - 1];
        } else {
            resultado = palavra;
        }

        if (tamanho % 2 == 0) {
            for (int i = 0; i < (int)resultado.size(); i++) {
                if (resultado[i] >= 'a' && resultado[i] <= 'z') {
                    if (resultado[i] == 'z') {
                        resultado[i] = 'a';
                    } else {
                        resultado[i]++;
                    }
                }
            }
        } else {
            reverse(resultado.begin(), resultado.end());
        }

        cout << resultado << endl;
    }

    return 0;
}
```

---

# Complexidade

Se `L` for o tamanho máximo de uma palavra, a solução percorre cada palavra uma quantidade constante de vezes.

```txt
Tempo: O(n * L)
Memória: O(L)
```

Como `n ≤ 100` e `L ≤ 100`, a solução passa tranquilamente.

---

# Habilidades Treinadas

Esta questão treina:

- leitura de strings;
- uso de `size()`;
- acesso ao primeiro e último caractere;
- uso de `to_string`;
- condicionais com tamanho de string;
- inversão de string com `reverse`;
- manipulação de caracteres;
- rotação simples de letras;
- cuidado com números dentro de uma string;
- separação entre dado original e resultado intermediário.

---

# Relação com o Problema Base

Esta questão é análoga ao problema **A. Way Too Long Words**, pois mantém a técnica principal:

```txt
se a palavra for muito longa, abreviar usando primeira letra + quantidade do meio + última letra
```

A diferença é que aqui Luan adicionou uma etapa de cifra simples, inspirada em problemas de criptografia, exigindo mais atenção com strings e condicionais.


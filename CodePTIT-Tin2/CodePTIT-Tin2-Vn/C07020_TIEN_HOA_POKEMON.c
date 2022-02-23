#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;
typedef struct Pokemon {
    char ten[100];
    int k, m, evo;
}Pokemon;

int main() {
    int n;
    scanf("%d", &n);
    Pokemon pokemonList[n];
    Pokemon max;
    max.evo = 0;
    int evoSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("\n");
        gets(pokemonList[i].ten);
        scanf("%d%d", &pokemonList[i].k, &pokemonList[i].m);
        pokemonList[i].evo = 0;
        while (pokemonList[i].m >= pokemonList[i].k) {
            pokemonList[i].evo += pokemonList[i].m / pokemonList[i].k;
            pokemonList[i].m = (pokemonList[i].m % pokemonList[i].k) + (pokemonList[i].m / pokemonList[i].k) * 2;
        }
        evoSum += pokemonList[i].evo;
        if (pokemonList[i].evo > max.evo) {
            strcpy(max.ten, pokemonList[i].ten);
            max.evo = pokemonList[i].evo;
        } 
    }

    printf("%d\n%s", evoSum, max.ten);
}
#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

<<<<<<< HEAD
int sumar(const int a, const int b) {//recibe dos enteros y devuelve su suma
=======
int sumar(const int a, const int b) { //la función recibe dos números enteros como parámetros y devuelve la suma de dichos números
>>>>>>> 907cfe1df6a7d0f1fee85f53b0384d772d95d661
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) { //recibe dos enteros y devuelve su producto
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

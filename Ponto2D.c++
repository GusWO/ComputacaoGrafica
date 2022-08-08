#include <stdio.h>

typedef enum{CRICULO = 0, LOSANGO = 1} formato;

struct ponto
{
    double x, y;
    formato figura;
};

void imprimirA(struct ponto p)
{
    printf("%lf %lf %d\n", p.x, p.y, p.figura);
}

void imprimirB(struct ponto *p)
{
    printf("%lf %lf %d\n\n", p->x, p->y, p->figura);
}

void deslocarA(struct ponto p, double dx, double dy)
{
    p.x += dx;
    p.y += dy;
}

void deslocarB(struct ponto *p, double dx, double dy)
{
    p->x += dx;
    p->y += dy;
}

int main(void)
{
    struct ponto p = {1.0, 1.0, LOSANGO};
    imprimirA(p);
    imprimirB(&p);
    deslocarA(p, 1.0, 1.0);
    imprimirA(p);
    imprimirB(&p);
    deslocarB(&p, 1.0, 1.0);
    imprimirA(p);
    imprimirB(&p);

    return 0;
}

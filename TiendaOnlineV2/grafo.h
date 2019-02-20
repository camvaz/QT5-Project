#ifndef GRAFO_H
#define GRAFO_H
#define MAX 20
#include <QString>

class Grafo
{
    int MatAdy[MAX][MAX];
    int NumVer, Vertices[MAX], DistMin[MAX], CerTran[MAX][MAX], VerInt[MAX][MAX];
public:
    Grafo();
    void Lee(int&&, int&&, const int&);
    void Dijkstra(int&&);
    int getDistanciaMinima(int&&);
};

#endif // GRAFO_H

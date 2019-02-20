#include "grafo.h"

Grafo::Grafo()
{
    int Ind1, Ind2;
        for (Ind1=0; Ind1<MAX; Ind1++)
        {
            DistMin[Ind1]=0;
            for (Ind2=0; Ind2<MAX; Ind2++)
            {
                if (Ind1!=Ind2)
                   MatAdy[Ind1][Ind2]=999;
                else
                {
                   MatAdy[Ind1][Ind2]=0;
                   CerTran[Ind1][Ind2]=0;
                   VerInt[Ind1][Ind2]=0;
                }
            }
        }
        NumVer=0;
}

void Grafo::Lee(int &&numVer = 6, int &&numArc = 6, const int& clientWight = 1)
{
    int NumArcos;
    NumVer = numVer;
    for(int i=0; i<numVer; i++)
        Vertices[i] = i+1;
    NumArcos = numArc;

    MatAdy[0][1] = 70;
    MatAdy[1][2] = 60;
    MatAdy[2][3] = 20;
    MatAdy[3][4] = 10;
    MatAdy[4][0] = 90;
    MatAdy[0][3] = 30;
    MatAdy[0][5] = clientWight;
}



int Minimo(int Val1, int Val2)
{
    int Min= Val1;
    if (Val2 < Min)
       Min=Val2;
    return Min;
}

void Grafo::Dijkstra(int&& Origen)
{
    int Aux[MAX], VertInc[MAX], Ver1, Ver2, Ind1, Ind2, Menor, Band;
    /* El arreglo VertInc se utiliza para guardar los vértices elegidos por ser los de la distancia mínima. El arreglo Aux
       es un arreglo lógico que indica si el nodo de la posición i ya fue incluido en VertInc y de esta manera evitar ciclos. */
    for (Ind1= 0; Ind1 < NumVer; Ind1++)
    {
        Aux[Ind1]=0;
        VertInc[Ind1]=0;
    }
    Aux[Origen-1]=1;
    /* El arreglo donde se guardan las distancias mínimas del Origen a los demás vértices se inicializa con los valores
       de la matriz de adyacencia. */
    for (Ind1= 0; Ind1 < NumVer; Ind1++)
        DistMin[Ind1]=MatAdy[Origen][Ind1];
    for (Ind1=0; Ind1<NumVer; Ind1++)
    {
        /* Se busca el vértice Ver1 en (Vertices - VertInc) tal que DistMin[Ver1] sea el mínimo valor. Se usa el 999 como
           valor inicial ya que es el elegido para indicar que no existe camino entre dos vértices. */
        Menor= 999;
        for (Ind2= 1; Ind2 < NumVer; Ind2++)
            if (DistMin[Ind2] < Menor && !Aux[Ind2])
            {
                Ver1=Ind2;
                Menor=DistMin[Ind2];
            }
        // Se incluye Ver1 a VertInc y se actualiza el arreglo Aux.
        VertInc[Ind1]=Ver1;
        Aux[Ver1]=1;
        // Se busca la distancia mínima para cada vértice Ver2 en (Vertices - VertInc).
        Ver2=1;
        while (Ver2 < NumVer)
        {
            Band=0;
            Ind2= 1;
            while (Ind2 < NumVer && !Band)
                if (VertInc[Ind2] == Ver2)
                    Band= 1;
                else
                    Ind2++;
                if (!Band)
                    DistMin[Ver2]=Minimo(DistMin[Ver2],DistMin[Ver1] + MatAdy[Ver1][Ver2]);
                Ver2++;
        }
    }
}

int Grafo::getDistanciaMinima(int &&direccion = 5)
{
    return DistMin[direccion];
}

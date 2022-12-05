#define N 100

typedef struct {
    char element[N];
    int matrix[N][N];
    int noElements;
}Graph;

int main()
{
    Graph graph;
    graph.element[0]='A';
    graph.element[1]='B';
    graph.element[2]='C';
    graph.element[3]='D';
    graph.element[4]='E';

    graph.matrix[0][0] = 0;
    graph.matrix[0][1] = 0;
    graph.matrix[0][2] = 1;
    graph.matrix[0][3] = 2;
    graph.matrix[0][4] = 0;


    graph.matrix[1][0] = 7;
    graph.matrix[1][1] = 0;
    graph.matrix[1][2] = 3;
    graph.matrix[1][3] = 0;
    graph.matrix[1][4] = 5;

}
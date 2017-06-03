#include "../headers/graph.h"

graph new_graph(int m, int n, vector<vertex> vertices) {
  graph g;

  g.m = m;
  g.n = n;

  g.vertices = vertices;

  for(int i = 0 ; i < g.m ; i++) {
    vector<edge> row;
    for(int j = 0 ; j < g.n ; j++) {
      row.push_back(new_edge(vertices.at(i), vertices.at(j), i, j));
    }
    g.edges.push_back(row);
  }

  return g;
}

#include "../headers/mst.h"

vector<edge> prim(graph g) {
  vector<edge> edges = get_vector(g);

  auto cmp_pq = [](edge left, edge right) { return (left.weight) > (right.weight); };
  priority_queue<edge, vector<edge>, decltype(cmp_pq)> pq(cmp_pq);
  for(edge e : edges) pq.push(e);

  vector<edge> mst;
  while(pq.size() > 0) {
    edge e = pq.top(); pq.pop();
    edge min_edge;
    do {
      if(!g.vertices.at(e.src).visited) {
        mst.push_back(g.edges.at(e.src).at(e.des));
        g.vertices.at(e.src).visited = true;
      }

      vector<edge> adjs = g.edges.at(e.des);
      if((unsigned int)(e.des + 1) <= (adjs.size() - 1)) min_edge = adjs.at(e.des + 1);
      else break;
      for(unsigned int i = (e.des + 2) ; i <= (adjs.size() - 1) ; i++) {
        edge adj = adjs.at(i);
        if(!g.vertices.at(adj.src).visited) {
          if(adj.weight < min_edge.weight) min_edge = adj;
        }
      }
      e = g.edges.at(min_edge.src).at(min_edge.des);
    } while(!g.vertices.at(e.src).visited);
  }

  return mst;
}

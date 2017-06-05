#include "../headers/mst.h"

bool cmp_v(edge e1, edge e2) {
  /*printf("src-src %d-%d: %d | des-des %d-%d: %d | src-des %d-%d: %d | des-src %d-%d: %d\n",
    e1.src, e2.src, (e1.src == e2.src), e1.des, e2.des, (e1.des == e2.des),
    e1.src, e2.des, (e1.src == e2.des), e1.des, e2.src, (e1.des == e2.src)
  );*/
  return (((e1.src == e2.src) && (e1.des == e2.des)) || ((e1.src == e2.des) && (e1.des == e2.src)));
}

vector<edge> prim(graph g) {
  vector<edge> edges = get_vector(g);

  auto cmp_pq = [](edge left, edge right) { return (left.weight) > (right.weight); };
  priority_queue<edge, vector<edge>, decltype(cmp_pq)> pq(cmp_pq);
  for(edge e : edges) pq.push(e);

  vector<edge> mst;
  while(pq.size() > 0) {
    //printf("pq size: %ld | mst size: %ld\n", pq.size(), mst.size());
    edge e = pq.top(); pq.pop();
    //printf("out: analyzing edge from %d to %d: %f weight\n", e.src, e.des, e.weight);
    while(mst.size() < edges.size()) {
      if(!binary_search(mst.begin(), mst.end(), e, cmp_v) || (mst.size() < 1)) {
        //printf("not in vector, vector size: %ld\n", mst.size());
        mst.push_back(g.edges.at(e.src).at(e.des));
      }
      else {
        //printf("already in vector\n");
        break;
      }
      vector<edge> adjs = g.edges.at(e.src);
      edge min_edge = adjs.at(e.src + 1);
      printf("src: %d, des: %d | ", e.src, e.des);
      for(unsigned int i = (e.src + 1) ; i < adjs.size() ; i++) {
        edge adj = adjs.at(i);
        printf("got %d from %d\n", adj.des, adj.src);
        if(adj.weight <  min_edge.weight && binary_search(mst.begin(), mst.end(), adj, cmp_v)) min_edge = adj;
      }
      e = g.edges.at(min_edge.src).at(min_edge.des);
      //printf("in: analyzing edge from %d to %d: %f weight\n", e.src, e.des, e.weight);
    }
  }

  //printf("vector size: %ld\n", mst.size());

  return mst;
}

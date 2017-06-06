# mst-prim-kruskal
Clustering aggregation using Prim and Kruskal's MST algorithm.

## What is it for?
### Prim
Given an integer number `k`, run Prim's algorithm to build a MST based on a priority queue. Then remove the `k` edges with higher weight. This will produce `k+1` clusters.

### Kruskal
Given an integer number `k` and based on a union find structure, run Kruskal's algorithm to build `k` MST.

## Results
Check results [here](https://github.com/jgcmarins/mst-prim-kruskal/tree/master/results).

## How to use
```
$ make
$ make run
```

## References
[Graph Algorithms](https://github.com/mission-peace/interview/tree/master/C%2B%2B/Graph%20Algorithms)

## Notices
#### #1
This software is incomplete and have many things to be fixed.

#### #2
Sorry for my bad `C++`. It's been a long time :grimacing:

## License
[MIT](https://github.com/jgcmarins/mst-prim-kruskal/blob/master/LICENSE)

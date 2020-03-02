struct t_graph {
  int n_nodes;
  graph_node *nodes;
  int *visited;
  adj_matrix am;
  }

static int search_index = 0;

void search( graph g ) {
  int k;
  for(k=0;k<g->n_nodes;k++) g->visited[k] = FALSE;
  search_index = 0;
  for(k=0;k<g->n_nodes;k++) {
    if ( !g->visited[k] ) visit( g, k );
    }
  }
//The visit function is called recursively:
void visit( graph g, int k ) {
  int j;
  g->visited[k] = ++search_index;
  for(j=0;j<g->n_nodes;j++) {
    if ( adjacent( g->am, k, j ) ) {
      if ( !g->visited[j] ) visit( g, j );
  }

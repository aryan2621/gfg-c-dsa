// Comparison of Adjcency list and Adjacency Matrix

/*
                               List                  Matrix
Memory                     |   theta(v+e)     |     theta(v*v)
                           |                  |
                           |                  |
                           |                  |
Check if there is an       |   O(v)           |    theta(1)
edge from u to v           |                  |
                           |                  |
Find all the adjacent      |   theta(deg(v))  |    theta(v)
of u                       |                  |
                           |                  |
Add on Edge                |    O(1)          |    theta(1)
                           |                  |
Remove an Edge             |    O(v)          |    theta(1)
                           |                  |

Undirected ->0<=E<=v*(v-1)/2

Directed ->0<=E<=v*(v-1)
*/
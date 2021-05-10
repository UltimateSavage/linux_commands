# Simplistic version of linux tr command
 -expects 2 command-line arguments (CLAs), set1 and set2

 -reads characters from stdin, and writes them to stdout,
  replacing characters from set1 by those of set2 (like tr).

 -Note:

  -sets are alphanumeric characters and must be the same length e.g.:
   ./a.out abc x3Q

  -interpreted sequences not implemented yet

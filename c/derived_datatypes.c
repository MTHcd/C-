#include <stdio.h>

int main() {
  
  // table, pointers, function
  int table[3][4] = {
  {1, 2, 3, 4}, 
  {5, 6, 7, 8}, 
  {9, 10, 11, 12}
};
  // int table[x][y]
  // x dimension of rows
  // y dimension of columns

  // Printing table
  for (int i = 0; i < 3; i ++) {
      for (int j = 0; j < 4; j ++) {
        printf("%d ", table[i][j]);
      }
      printf("\n");
  }
  
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int N, M;
char field[N][M + 1];

void dfs(int x, int y) {
  field[x][y] = '.';

  for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
      int nx = x + dx, ny = y + dy;
      if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
    }  
  }
  return ;
}

void solve() {
  int res = 0;
  for (int i = 0; i < N; i ++){
    for (int i = 0; i < N; i ++){
      if (field[i][j] == 'W') {
        dfs(i, j);
        res++;
      }
    }
  }
  printf("%d\n", res);
} 

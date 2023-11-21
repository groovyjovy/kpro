#include <bits/stdc++.h>
using namespace std;

#include <atcoder/modint>
using namespace atcoder;

int H, W;

// 移動方向（上、下、左、右）
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

// DFS関数
void dfs(vector<vector<char>>& grid, int x, int y) {
    // 現在のセルを訪問済みにマーク
    grid[x][y] = 'x'; // 訪問済みを 'x' でマークする

    // 各方向に対して探索
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // グリッドの範囲内かつ未訪問のセルかどうかを確認
        if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '.') {
            dfs(grid, nx, ny);
        }
    }
}

int main() {
    // グリッドの入力を受け取る
    cin >> H >> W;
    vector<vector<char>> originalGrid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> originalGrid[i][j];
        }
    }

    // 各セルからDFSを開始
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            // グリッドのコピーを作成
            vector<vector<char>> grid = originalGrid;

            // DFSを実行
            dfs(grid, i, j);

            // 結果を出力
            cout << "DFS started from (" << i << ", " << j << "):" << endl;
            for (int k = 0; k < H; k++) {
                for (int l = 0; l < W; l++) {
                    cout << grid[k][l];
                }
                cout << endl;
            }
            cout << endl;
        }
    }

    return 0;
}

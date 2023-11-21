#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> originalGrid(H, vector<char>(W));

    int minX = INT_MAX, maxX = INT_MIN;
    int minY = INT_MAX, maxY = INT_MIN;

    // グリッドの入力を受け取り、'#'の座標の最小値と最大値を計算
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> originalGrid[i][j];
            if (originalGrid[i][j] == '#') {
                minX = min(minX, i);
                maxX = max(maxX, i);
                minY = min(minY, j);
                maxY = max(maxY, j);
            }
        }
    }

    vector<vector<char>> sharpOnlyGrid(maxX - minX + 1, vector<char>(maxY - minY + 1, '#'));

    for (int i = minX; i <= maxX; i++) {
        for (int j = minY; j <= maxY; j++) {
            if (originalGrid[i][j] != sharpOnlyGrid[i - minX][j - minY]) {
                cout << i + 1 << ' ' << j + 1 << endl;
                return 0;
            }
        }
    }

    // '#'の座標を出力
    return 0;
}

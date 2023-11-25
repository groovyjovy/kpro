#include <iostream>
#include <vector>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> S(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> S[i];
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (S[i][j] == 'o') {
                for (int k = 0; k < N; ++k) {
                    if (k != j && S[i][k] == 'o') {
                        for (int l = 0; l < N; ++l) {
                            if (l != i && S[l][j] == 'o' && S[l][k] == 'o') {
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}

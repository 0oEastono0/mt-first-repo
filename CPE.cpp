#include<bits/stdc++.h>
using namespace std;

int max_x, max_y;

bool scent[51][51] = {false};

// 修正方向定義：N=0, E=1, S=2, W=3 (順時針)
const int DX[] = {0, 1, 0, -1};  // N, E, S, W 對應的 X 變化
const int DY[] = {1, 0, -1, 0};  // N, E, S, W 對應的 Y 變化
const char Dir_char[] = {'N', 'E', 'S', 'W'}; // 修正：確保字元順序一致

bool is_on_gird(int x, int y) {
    // 檢查範圍：包含 0 到 max_x/max_y
    return x >= 0 && y >= 0 && x <= max_x && y <= max_y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL); 在 cin.tie(NULL) 之後通常是多餘的，但無害

    // 修正：正確讀取世界邊界，不應在此處 return
    if (!(cin >> max_x >> max_y)) {
        return 0; // 如果連第一行都讀不到，則結束
    }

    int current_x, current_y;
    char start_dir_char;
    string commend;

    while (cin >> current_x >> current_y >> start_dir_char >> commend) {
        int current_dir = -1;
        // 修正：起始方向的編號應與 DX/DY/Dir_char 保持一致
        if (start_dir_char == 'N') current_dir = 0;
        else if (start_dir_char == 'E') current_dir = 1; // 修正
        else if (start_dir_char == 'S') current_dir = 2;
        else if (start_dir_char == 'W') current_dir = 3; // 修正

        bool is_lost = false;
        // 使用 'cmd' 作為指令變數名，避免與指令字串 'commend' 混淆
        for (char cmd : commend) {
            if (is_lost) break;

            if (cmd == 'R') {
                current_dir = (current_dir + 1) % 4;
            } else if (cmd == 'L') {
                current_dir = (current_dir + 3) % 4; // 等同於 (dir - 1 + 4) % 4
            } else if (cmd == 'F') {
                int next_x = current_x + DX[current_dir];
                int next_y = current_y + DY[current_dir];

                if (!(is_on_gird(next_x, next_y))) {
                    // 會掉落：檢查當前位置 (掉落前) 是否有氣味
                    if (scent[current_x][current_y]) {
                        continue; // 有氣味，忽略此次移動，留在原地
                    } else {
                        // 無氣味，LOST
                        scent[current_x][current_y] = true; // 在當前位置留下氣味

                        is_lost = true;

                        break; // 終止所有後續指令
                    }
                } else {
                    // 不會掉落，更新位置
                    current_x = next_x;
                    current_y = next_y;
                }
            }
        }

        // 輸出結果：LOST 應該在方向之後
        cout << current_x << " " << current_y << " " << Dir_char[current_dir];
        if (is_lost) {
            cout << " LOST";
        }
        cout << "\n"; // 使用 '\n' 比 endl 效率高
    }
    return 0;
}
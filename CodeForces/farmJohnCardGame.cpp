#include <iostream>
using namespace std;

int *calculateTurns(int cards[]) {

}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        int cards[n][m];
        int turn_order[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int current_card = -1;
                cin >> cards[i][j];
                if(cards[i][j] == current_card + 1) {

                }
            }
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << cards[i][j];
        //     }
        //     cout << endl;
        // }

    }
}
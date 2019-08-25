#include <bits/stdc++.h>

int main() {
    int minBottlesMove = 0 , possibleBottlesMove[6];
    int BROWN[3], GREEN[3], CLEAR[3];

    while (std::cin >> BROWN[0] >> GREEN[0] >> CLEAR[0] >> BROWN[1] >> GREEN[1] >> CLEAR[1] >>BROWN[2] >> GREEN[2] >> CLEAR[2]) {

        possibleBottlesMove[0] = BROWN[1] + BROWN[2] + CLEAR[0] + CLEAR[2] + GREEN[0] + GREEN[1];
        possibleBottlesMove[1] = BROWN[1] + BROWN[2] + GREEN[0] + GREEN[2] + CLEAR[0] + CLEAR[1];
        possibleBottlesMove[2] = CLEAR[1] + CLEAR[2] + BROWN[0] + BROWN[2] + GREEN[0] + GREEN[1];
        possibleBottlesMove[3] = CLEAR[1] + CLEAR[2] + GREEN[0] + GREEN[2] + BROWN[0] + BROWN[1];
        possibleBottlesMove[4] = GREEN[1] + GREEN[2] + BROWN[0] + BROWN[2] + CLEAR[0] + CLEAR[1];
        possibleBottlesMove[5] = GREEN[1] + GREEN[2] + CLEAR[0] + CLEAR[2] + BROWN[0] + BROWN[1];

        minBottlesMove = possibleBottlesMove[0];

        for (int bottleMove : possibleBottlesMove) {
            if (bottleMove < minBottlesMove) minBottlesMove = bottleMove;
        }

        for (int i = 0; i < 6; ++i) {
            if (possibleBottlesMove[i] == minBottlesMove) {
                if (i == 0) std::cout << "BCG " << minBottlesMove << std::endl;
                else if (i == 1) std::cout << "BGC " << minBottlesMove << std::endl;
                else if (i == 2) std::cout << "CBG " << minBottlesMove << std::endl;
                else if (i == 3) std::cout << "CGB " << minBottlesMove << std::endl;
                else if (i == 4) std::cout << "GBC " << minBottlesMove << std::endl;
                else if (i == 5) std::cout << "GCB " << minBottlesMove << std::endl;

                break;
            }
        }
    }

    return 0;
}
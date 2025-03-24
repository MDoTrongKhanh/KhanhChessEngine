#include <iostream>
#include <string>
#include <sstream>

void handle_position(std::string input) {
    // Xử lý lệnh "position startpos" hoặc "position fen ..."
    std::cout << "Position received: " << input << std::endl;
}

void handle_go() {
    // Tạm thời trả về bestmove e2e4, sau này thay bằng thuật toán tìm nước đi
    std::cout << "bestmove e2e4" << std::endl;
}

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {
        if (input == "uci") {
            std::cout << "id name KhanhChessEngine" << std::endl;
            std::cout << "id author Do Trong Khanh" << std::endl;
            std::cout << "uciok" << std::endl;
        } else if (input == "isready") {
            std::cout << "readyok" << std::endl;
        } else if (input.find("position") == 0) {
            handle_position(input);
        } else if (input.find("go") == 0) {
            handle_go();
        } else if (input == "quit") {
            break;
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <string>

void CreateBoard(std::vector<std::vector<std::string>>&matrix){
  std::vector<std::string> col;
  for(int i = 0; i<3; i++){
    col.push_back("");
  }
  for(int i = 0; i<3; i++){
    matrix.push_back(col);
  }

}

void DisplayBoard(std::vector<std::vector<std::string>>&matrix){
  for (int i = 0; i < matrix.size(); i++){
      for (int j = 0; j < board[i].size(); j++){
          std::cout << board[i][j] << " | ";
      }
      std::cout << std::endl;
    }
}
int main(){
  std::vector<std::vector<std::string>> board;
  CreateBoard(board);
}

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

<<<<<<< HEAD
void DisplayBoard(std::vector<std::vector<std::string>>&matrix){
  for (int i = 0; i < matrix.size(); i++){
      for (int j = 0; j < matrix[i].size(); j++){
          std::cout  << "| " << matrix[i][j] << " | ";
      }
      std::cout << std::endl;
=======
void DisplayBoard(char** board){
  for(int x=0;x<3;x++){  // loop through x cordinates
    for(int y=0;y<3;y++){  // loop for through y cordinates
      std::cout<<board[x][y];  // display the current value in each corrdinate of the board
>>>>>>> main
    }
	 std::cout << std::endl;
  }
}
int main(){
  std::vector<std::vector<std::string>> board;
  CreateBoard(board);
  DisplayBoard(board);
}

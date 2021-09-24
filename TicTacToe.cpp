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

void DisplayBoard(char** board){
  for(int x=0;x<3;x++){  // loop through x cordinates
    for(int y=0;y<3;y++){  // loop for through y cordinates
      std::cout<<board[x][y];  // display the current value in each corrdinate of the board
    }
	 std::cout << std::endl;
  }
}
int main(){
  std::vector<std::vector<std::string>> board;
  CreateBoard(board);
}

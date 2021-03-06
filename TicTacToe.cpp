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
      for (int j = 0; j < matrix[i].size(); j++){
          std::cout  << "| " << matrix[i][j] << " | ";
      }
      std::cout << std::endl;
    }
	 std::cout << std::endl;
  }


int GetPlayerChoice()
{
  int choice;
  std::cout << "Enter in your choice"<< std::endl;
  std::cin >> choice;
  return choice;
}

void PlaceMarker(std::vector<std::vector<std::string>>&matrix,bool x){
  if(x){
    matrix[GetPlayerChoice()][GetPlayerChoice()] = "X";
  }
  else{
    matrix[GetPlayerChoice()][GetPlayerChoice()] = "O";
  }
}

int main(){
  std::vector<std::vector<std::string>> board;
  CreateBoard(board);
  int count = 1;
  DisplayBoard(board);
  while(count < 10){
    PlaceMarker(board,count%2);
    count += 1;
    DisplayBoard(board);
  }
}

#include <iostream>
#include <Windows.h>

int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
int cross_or_zero = 1;
int n = 0;
//cross = -1, zero = 1

int rusificator(){
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  GetConsoleCP();
  return 0;
}

// int game() {
//   return 0;
// }




int turn() {
  std::cout << "Выберите, куда поставить " << (cross_or_zero == 1 ? ("O") : ("X")) <<
  ", просто введите номер!" << std::endl;
  int choice;
  std::cin >> choice;
  switch (choice) {
    case 1:
      a1 = cross_or_zero == 1 ? 1 : -1;
    case 2:
      a2 = cross_or_zero == 1 ? 1 : -1;
    case 3:
      a3 = cross_or_zero == 1 ? 1 : -1;
    case 4:
      a4 = cross_or_zero == 1 ? 1 : -1;
    case 5:
      a5 = cross_or_zero == 1 ? 1 : -1;
    case 6:
      a6 = cross_or_zero == 1 ? 1 : -1;
    case 7:
      a7 = cross_or_zero == 1 ? 1 : -1;
    case 8:
      a8 = cross_or_zero == 1 ? 1 : -1;
    case 9:
      a9 = cross_or_zero == 1 ? 1 : -1;
  } 
  return 0;
}

int game() {
  n = n + 1;
  if (n%2 == 1){
    cross_or_zero = 1;
  }
  else
    cross_or_zero = -1;
  turn();
  return 0;
}

int print() {
  using namespace std;
  cout << a1 << " " << a2 << " " << a3 << endl;
  cout << a4 << " " << a5 << " " << a6 << endl;
  cout << a7 << " " << a8 << " " << a9 << endl;
  //cout << endl << "Следующий игрок ставит " << (cross_or_zero > 0 ? ("O") : ("X")) << endl;
}

int start() {
  using namespace std;
  cout << "Обращаться к ячейкам по следующей закономерности:" << endl;
  cout << "a1 a2 a3" << endl << "a4 a5 a6" << endl << "a7 a8 a9" << endl;
  game();
  return 0;
}

int main() {
  rusificator();
  start();
  return 0;
}
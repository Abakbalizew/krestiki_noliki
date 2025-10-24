#include <iostream>
#include <Windows.h>

int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
char cross_or_zero[10] = "nothing";
//cross = -1, zero = 1

int main() {
  rusificator();
  start();
  return 0;
}

int rusificator(){
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  GetConsoleCP();
  return 0;
}

int start() {
  using namespace std;
  cout << "Обращаться к ячейкам по следующей закономерности:" << endl;
  cout << "a1 a2 a3" << endl << "a4 a5 a6" << endl << "a7 a8 a9" << endl;
  int n = 0;
  return 0;
}

int game(int n = 0) {
  n = n + 1;
  turn();
  return 0;
}

int print(){
  using namespace std;
  cout << a1 << " " << a2 << " " << a3 << endl;
  cout << a4 << " " << a5 << " " << a6 << endl;
  cout << a7 << " " << a8 << " " << a9 << endl;
  cout << endl << "Следующий игрок ставит " << cross_or_zero << endl;
}

int turn() {
  std::cout << "Выберите, куда поставить " << cross_or_zero;
  return 0;
}
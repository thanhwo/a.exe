#include <iostream>
using namespace std;
void veCayThong(int kichThuoc);
int main(){
    int n;
    cin >> n;
    veCayThong(n);
    return 0;
}
void veCayThong(int kichThuoc){
  for (int i = 1; i <= kichThuoc ; i++) {
    for (int j = 1; j <= 3*kichThuoc ; j++) {
      if ( ( j == 2*kichThuoc-i) || (j == 2*kichThuoc-2+i) || (i == kichThuoc) && (j >= kichThuoc) && (j <= 3*kichThuoc-2 ) ) {
        cout << "* ";
        }
      else {
        cout << "  ";
      }
    }
      cout << '\n';
  }
  if (kichThuoc < 5){
    for (int i = 2 ; i <= kichThuoc+1; i++) {
      for (int j = 1; j <= 3*kichThuoc ; j++) {
        if ( (j == 2*kichThuoc-i) || (j == 2*kichThuoc+i-2) || (i == kichThuoc +1) && (j >= kichThuoc) && (j <= 3*kichThuoc-2 ) ) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << '\n';
    }
    for (int i=1; i <= kichThuoc ; i++){
      for (int j=1; j <= 3*kichThuoc ; j++ ) {
        if( (j == 2*kichThuoc-i -2) || (j == 2*kichThuoc+i) || (i == kichThuoc ) && (j >= kichThuoc -1) && (j <= 3*kichThuoc-1 )) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << '\n';
    }
    for (int i=1 ; i <= 3*kichThuoc ; i++) {
      if ( i < kichThuoc) {
        cout << "  ";
      }
      else if ( i < 2*kichThuoc+1) cout << "|_";
      else if ( i == 2*kichThuoc+1) cout << "|";
    }
  }
  else {
     for (int i = 2 ; i <= kichThuoc+1; i++) {
      for (int j = 0; j <= 3*kichThuoc + kichThuoc/2 ; j++) {
        if ( (j == 2*kichThuoc-i-2) || (j == 2*kichThuoc+i) || (i == kichThuoc +1) && (j >= kichThuoc-2) && (j <= 3*kichThuoc ) ) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << '\n';
    }
    for (int i=1; i <= kichThuoc ; i++){
      for (int j=1; j <= 4*kichThuoc  ; j++ ) {
        if( (j == 2*kichThuoc-i - kichThuoc+3) || (j == 2*kichThuoc+i+kichThuoc/2) || (i == kichThuoc ) && (j >= kichThuoc -7) && (j <= 3*kichThuoc+2 )) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << '\n';
    }

  }
}
  /*               *         i=1
                 *   *       i=2
               * * * * *     i=3
                 *   *       i=4
               *       *     i=5
             * * * * * * *   i=6
               *       *     i=7
             *           *   i=8
           * * * * * * * * * i=9
               |_|_|_|_| 
           1 2 3 4 5 6 7 8 9    
    */
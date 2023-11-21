#include <bits/stdc++.h>
using namespace std;

class Lomba {
private:
  int byk_seleksi, byk_peserta, byk_winner;
  string wbck;

  string *peserta;
  string *winner;
  int **nilai;

  int counter = 0;

public:
  void cek_kalau_win_1() {
    // seleksi 3 only
    int max = nilai[0][0];

    for (int i = 0; i < byk_peserta; i++) {
      if (max < nilai[i][3]) {
        max = nilai[i][3];
        winner[0] = peserta[i];
      }
    }

    if (winner[0] == wbck) {
      cout << "YA";
    } else {
      cout << "TIDAK";
    }
  }

  // constructor and destructor
  Lomba() {
    cin >> byk_seleksi;
    cin >> byk_peserta >> byk_winner;

    cin >> wbck;

    // alokasi
    peserta = new string[byk_peserta];
    winner = new string[byk_winner];
    nilai = new int *[byk_peserta];
    for (int i = 0; i < byk_peserta; i++) {
      nilai[i] = new int[byk_seleksi];
    }

    // cin sisanya
    for (int i = 0; i < byk_peserta; i++) {
      cin >> peserta[i];
      for (int j = 0; j < byk_seleksi; j++) {
        cin >> nilai[i][j];
      }
    }
  }
  ~Lomba() {
    delete[] peserta;
    delete[] winner;
    for (int i = 0; i < byk_peserta; i++) {
      delete[] nilai[i];
    }
    delete[] nilai;
  }
};

int main(int argc, char *argv[]) {
  Lomba jo;
  jo.cek_kalau_win_1();
}

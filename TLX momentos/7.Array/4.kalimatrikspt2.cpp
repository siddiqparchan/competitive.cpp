#include <iostream>

using namespace std;

int main(){
    int n, m, p;
    int i, j, k;
    cin >> n >> m >> p;
    int temp = 0;

    int x[n][m];
    int y[m][p];
    int result[n][p];

    for(i = 0; i < n; i++){
      for(j = 0; j < m; j++){
        cin >> x[i][j];
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < p; j++){
        cin >> y[i][j];
      }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            for(k = 0; k < m; k++){
                temp = temp + x[i][k] * y[k][j];
            }     
            result[i][j] = temp;
            temp = 0;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
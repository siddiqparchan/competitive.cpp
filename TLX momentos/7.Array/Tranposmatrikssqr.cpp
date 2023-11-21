#include <iostream>

using namespace std;

main(){
    int n,m;
    cout << "Square Only: \n";
    cin >> n >> m;

    short i,j,a,b;
    
    char matrix[n][m];
    char backup[n][m];

    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            backup[i][j] = matrix[i][j];
        }
    }

    for( i = 0,  b = 0; i < n; i++, b++){
        for( j = 0,  a = 0; j < m; j++, a++){
            matrix[i][j] = backup[a][b];
        }
    }

    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}
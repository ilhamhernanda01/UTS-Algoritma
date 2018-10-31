# Tugas-UTS


**Soal Pertama**
**Alur Program**

1. Deklarasikan variabel A, B, X, Y, sebagai variabel input.
2. Membaca input key board cin >> A >> B >> X >> Y.
3. Membandingkan Variabel X dengan Y Jika sama.
4. karena statement **false** tidak akan terjadi karena ``` {X != Y} ``` .
5. dan jika statement **True** maka X < Y berlaku rumus statement **True** dengan Syntax ``` X = X + A ``` .
6. dan jika statement **False** ``` Y = Y + B```.
7. maka akan muncul ``` X = X + A = (hasilnya) ```.

**Code Program**

```c++

#include <iostream>

using namespace std;

int main(){
    int A, B, X, Y;

    cout << "Masukkan Variabel X = "; cin >> A;
    cout << "Masukkan Variabel y = "; cin >> B;

    X = A;
    Y = B;
    if (X != Y){
        if (X < Y)
            (X = X + A);
        else
            (Y = Y + B);
    }


    cout << X;


}

```

**Soal kedua**

**Alur Program**

1. deklarasikan variabel input N, X, T, Batas; sebagai inputnya
2. memasukkan nilal N yaitu 2 angka terakhir NIM saya,  maka N adalah 60 
   dan batasnya adalah 160 dari hasil jumlahan N + 100,.
3. masukkan variabel X, dan T, X nya adalah 20 dan kemudian T adalah 60 (dari N).
4. dimana T kurang dari sama dengan batas, brarti tidak boleh melebihi batas
5. kemudian menghitung ``` X = X + 10; ```,dan hasilnya 30 kemudian menghirung ``` T = T + X; ```, 
   hasilnya adalah 90.
6. kemudian cetak variabel T

**Code Program**

```c++

#include <iostream>

using namespace std;

int main(){
    int N, X, T, Batas;

    N = 60;
    Batas = N + 100;
    X = 20;
    T = N;

    while (T <= Batas) {
            T = T + X;
            X = X + 10;
    }

    cout << T;
}

```
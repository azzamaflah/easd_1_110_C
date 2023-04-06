// 1. Suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algoritma dapat 
//membantu memecahkan masalah dengan cara yang efisien, 
//akurat, dan terstruktur. Algoritma dapat menghindari kesalahan yang mungkin terjadi dalam 
//proses penyelesaian masalah secara manual, dan dapat mempercepat proses penyelesaian masalah. 
//Oleh karena itu, algoritma sangat penting dalam menyelesaikan masalah.


// 2. Dalam algoritma, terdapat berbagai jenis data struktur yang dapat digunakan untuk menyimpan dan mengelola data, namun secara umum data struktur dapat dibagi menjadi dua, yaitu:
// Array: Array adalah kumpulan data yang serupa yang disimpan di dalam memori komputer dan diakses melalui indeks atau nomor urut.Setiap elemen dalam array memiliki indeks yang unik dan dapat diakses dengan cepat.Array biasanya digunakan untuk menyimpan data yang memiliki jenis dan ukuran yang sama.
// Linked List : Linked list adalah struktur data yang terdiri dari serangkaian simpul atau node, yang saling terhubung melalui referensi atau pointer.Setiap node memiliki data dan pointer yang menunjuk ke node berikutnya dalam linked list.Linked list biasanya digunakan untuk menyimpan data yang memiliki jenis dan ukuran yang berbeda atau tidak pasti, atau ketika data perlu dimasukkan atau dihapus dengan cepat.


// 3.Efisiensi suatu program algoritma dipengaruhi oleh beberapa faktor, seperti ukuran input, kompleksitas algoritma, jenis data struktur yang digunakan

// 4. bubble sort

// 5. Quadratic (selection sort,bubble sort)



// buatlah sebuah program yang mengimplementasikan selesction sort menggunakan bahasa pemrograman c++, berikut merupakan algoritman selection sort
// 1. repeat steps 2 and 3 varying j fromm 0 to n-2



#include <iostream>
using namespace std;

int aflah[20];				//array of integers to hold velues
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah: " << endl;
	}
	cout << "\n=====================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n=====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> aflah[i];
	}
}

void selectionSort(int aflah[], int n) {
	for (int j = 0; j < n - 1; j++) {
		int min_index = j;
		for (int i = j + 1; i < n; i++) {
			if (aflah[i] < aflah[min_index]) {
				min_index = i;
			}
		}
		int temp = aflah[j];
		aflah[j] = aflah[min_index];
		aflah[min_index] = temp;
	}
}

void display() {
	cout << "\n===========================" << endl;
	cout << "Sorted Array" << endl;
	cout << "============================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << aflah[i] << " ";
	}

}

int main()
{
	input();
	selectionSort(aflah, n);
	display();
	//system("pause");

	return 0;
}







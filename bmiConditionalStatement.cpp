#include <iostream> // Library untuk input dan output
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap elemen dari library

float calculateBMI(float weight, float height) { // Fungsi untuk menghitung BMI
    return weight / (height * height); // Rumus BMI: berat badan (kg) dibagi dengan tinggi badan (m) kuadrat
}

string classifyBMI(float bmi) { // Fungsi untuk mengklasifikasikan BMI berdasarkan nilai yang dihitung
    if (bmi < 18.5) { // Jika BMI kurang dari 18.5, maka status berat badan adalah "Kurang"
        return "Kurang";
    } else if (bmi >= 18.5 && bmi <= 24.9) { // Jika BMI antara 18.5 dan 24.9, maka status berat badan adalah "Normal"
        return "Normal";
    } else if (bmi >= 25 && bmi <= 29.9) { // Jika BMI antara 25 dan 29.9, maka status berat badan adalah "Kelebihan"
        return "Kelebihan";
    } else { // Jika BMI lebih dari 30, maka status berat badan adalah "Obesitas"
        return "Obesitas";
    }
}

int main() {
    float weight, height; // Variabel untuk menyimpan berat badan dan tinggi badan

    cout << "--- Program Penghitung BMI ---" << endl;

    cout << "Masukkan berat badan (kg): ";
    cin >> weight;

    cout << "Masukkan tinggi badan (m): ";
    cin >> height;

    float bmi = calculateBMI(weight, height); // Menghitung BMI menggunakan fungsi calculateBMI
    string classification = classifyBMI(bmi); // Mengklasifikasikan BMI menggunakan fungsi classifyBMI

    cout << "--- Hasil Perhitungan BMI ---" << endl;

    cout << "BMI Anda: " << bmi << endl;
    cout << "Status Berat Badan: " << classification << endl;

    return 0; // Mengembalikan nilai 0 untuk menandakan bahwa program telah selesai dengan sukses
}
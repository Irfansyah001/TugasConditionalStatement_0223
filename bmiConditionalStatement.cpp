#include <iostream> // Library untuk input dan output
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap elemen dari library

float calculateBMI(float weight, float height) { // Fungsi untuk menghitung BMI
    return weight / (height * height); // Rumus BMI: berat badan (kg) dibagi dengan tinggi badan (m) kuadrat
}

string classifyBMI(float bmi) { // Fungsi untuk mengklasifikasikan BMI berdasarkan nilai yang dihitung
    if (bmi < 18.5) { // Jika BMI kurang dari 18.5, maka status berat badan adalah "Kurang"
        return "Kurang";

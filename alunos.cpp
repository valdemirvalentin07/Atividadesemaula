#include <iostream>
using namespace std;

int main() {
    string aluno[10][4];  // 10 students, 4 columns (RA, 3 grades)
    int media;            // Stores the average grade
    int contador = 0;     // Counter for students with average >= 5

    // Input student data
    for (int lin = 0; lin < 10; lin++) {
        cout << "Informe o RA escolar (Aluno " << lin + 1 << "): ";
        cin >> aluno[lin][0];  // Student's RA

        cout << "Informe a primeira nota: ";
        cin >> aluno[lin][1];  // First grade

        cout << "Informe a segunda nota: ";
        cin >> aluno[lin][2];  // Second grade

        cout << "Informe a terceira nota: ";
        cin >> aluno[lin][3];  // Third grade

        // Convert grades from string to integer for media calculation
        int nota1 = (aluno[lin][1]);
        int nota2 = (aluno[lin][2]);
        int nota3 = (aluno[lin][3]);
        
        media = (nota1 + nota2 + nota3) / 3;  // Calculate average

        if (media >= 5) {
            contador++;  // Increment the counter for students with average >= 5
        }
    }

    // Display students' data and grades
    for (int lin = 0; lin < 10; lin++) {
        int nota1 = (aluno[lin][1]);
        int nota2 = (aluno[lin][2]);
        int nota3 = (aluno[lin][3]);
        media = (nota1 + nota2 + nota3) / 3;  // Calculate average again for display

        cout << "RA escolar: " << aluno[lin][0] << endl;
        cout << "Notas: " << nota1 << " + " << nota2 << " + " << nota3 << " = " << media << endl;
        cout << "========================== \n";
    }

    cout << "Número de alunos com média >= 5: " << contador << endl;

    return 0;
}


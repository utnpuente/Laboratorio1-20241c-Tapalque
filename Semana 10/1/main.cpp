/*
    Una veterinaria necesita procesar las consultas del £ltimo mes. Cada registros cuenta con los siguientes datos:

    - N£mero de paciente (4 d¡gitos)
    - precio de la consulta
    - Tama¤o del animal ('C', 'M' o 'G')
    - Urgencia (bool)

    El ingreso de registro termina con un n£mero de paciente igual a cero.

    Teniendo en cuenta el tama¤o del animal se cobra un extra:

    - Chico: $1500
    - Mediano: $2500
    - Grande: $3500

    Adem s, si la consulta fue urgente, se cobra $5.000

    Se pide procesar e informar:

    - El tama¤o de animal que m s consultas tuvo.
    - La recaudaci¢n total para cada tama¤o.
    - Porcentaje de consultas urgentes y no urgentes .
    - El n£mero de paciente con menor importe.
    - El tipo de animal que mayor cantidad deÿurgenciasÿtuvo.
*/

#include <iostream>
using namespace std;

int main()
{
    system("cls");

    // REGISTRO
    int nroPaciente;
    float precio;
    char tamanioAnimal;
    bool urgencia;
    const float PRECIO_URGENTE = 5000;

    // PUNTO A
    int cantChico = 0;
    int cantMediano = 0;
    int cantGrande = 0;
    int cantTamanoMayor;
    char tipoTamanoMayor;

    // Punto B
    float importeTotal;
    float acuChico = 0;
    float acuMediano = 0;
    float acuGrande = 0;

    // Punto C
    int contConsultasTotal = 0;
    int contConsultasUrgente = 0;
    float porcConsultasUrgente;
    float porcConsultasNoUrgente;

    // Punto D
    float importeMenor = -1;
    int importeMenorNroPaciente;

    cout << "Ingrese el n£mero de paciente: ";
    cin >> nroPaciente;

    while (nroPaciente != 0)
    {
        cout << "Ingrese el precio de la consulta: ";
        cin >> precio;
        cout << "Ingrese el tama¤o del animal (C, M  o G): ";
        cin >> tamanioAnimal;
        cout << "Ingrese si es una urgencia (1 o 0): ";
        cin >> urgencia;

        // Cuenta todas las consultas
        contConsultasTotal++;

        // Calcular importe
        importeTotal = precio;

        if (urgencia == true)
        {
            importeTotal += PRECIO_URGENTE;
            contConsultasUrgente++;
        }

        switch (tamanioAnimal)
        {
        case 'c':
        case 'C':
            // Punto A
            cantChico++;

            // Calculo importe
            importeTotal += 1500;

            // Punto B
            acuChico += importeTotal;
            break;
        case 'm':
        case 'M':
            // Punto A
            cantMediano++;

            // Calculo importe
            importeTotal += 2500;

            // Punto B
            acuMediano += importeTotal;
            break;
        case 'g':
        case 'G':
            // Punto A
            cantGrande++;

            // Calculo importe
            importeTotal += 3500;

            // Punto B
            acuGrande += importeTotal;
            break;
        }

        if (importeMenor == -1 || importeTotal < importeMenor)
        {
            importeMenor = importeTotal;
            importeMenorNroPaciente = nroPaciente;
        }

        cout << "-----------------------------------" << endl;
        cout << "Ingrese el n£mero de paciente: ";
        cin >> nroPaciente;
    }

    // POST PROCESO
    // PUNTO A
    if (cantChico > cantMediano)
    {
        cantTamanoMayor = cantChico;
        tipoTamanoMayor = 'C';
    }
    else
    {
        cantTamanoMayor = cantMediano;
        tipoTamanoMayor = 'M';
    }

    if (cantGrande > cantTamanoMayor)
    {
        cantTamanoMayor = cantGrande;
        tipoTamanoMayor = 'G';
    }

    // Punto C
    porcConsultasUrgente = (float)contConsultasUrgente * 100 / contConsultasTotal;
    porcConsultasNoUrgente = 100 - porcConsultasUrgente;

    cout << "----------------------------------------" << endl;
    cout << "Punto A: El tama¤o de animal que mayor consultas tuvo fue " << tipoTamanoMayor << endl;
    cout << "Punto B: La recaudaci¢n para el tama¤o Chico fue de: $" << acuChico << endl;
    cout << "Punto B: La recaudaci¢n para el tama¤o Mediano fue de: $" << acuMediano << endl;
    cout << "Punto B: La recaudaci¢n para el tama¤o Grande fue de: $" << acuGrande << endl;
    cout << "Punto C: el porcentaje de las consultas urgentes fue de " << porcConsultasUrgente << "%" << endl;
    cout << "Punto C: el porcentaje de las consultas no urgentes fue de " << porcConsultasNoUrgente << "%" << endl;
    cout << "punto D: El cliente con menor importe es el Nø" << importeMenorNroPaciente << endl;

    system("pause > nul");
    return 0;
}
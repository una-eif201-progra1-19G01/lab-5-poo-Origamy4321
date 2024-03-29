//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef LAB_5_POO_ORIGAMY4321_TRABAJADOR_H
#define LAB_5_POO_ORIGAMY4321_TRABAJADOR_H

#include <string>

using namespace std;

class Trabajador {

private:
    string iD;
    int horasLab;
    int precioHoras;
    int annosLaborados;

public:
    Trabajador(const string &iD, int horasLab, int precioHoras, int annosLaborados);

    Trabajador();

    const string &getId() const;

    void setId(const string &iD);

    int getHorasLab() const;

    void setHorasLab(int horasLab);

    int getPrecioHoras() const;

    void setPrecioHoras(int precioHoras);

    int getAnnosLaborados() const;

    void setAnnosLaborados(int annosLaborados);

    virtual float calcularSalarioBase();

    virtual float calcularHorasExtra();

    virtual float calcularAnualidads();

    virtual float calcularSalarioBruto();

    virtual float calcularCargas();

    virtual float calcularSalarioNeto();

    virtual string toString();

};


#endif //LAB_5_POO_ORIGAMY4321_TRABAJADOR_H

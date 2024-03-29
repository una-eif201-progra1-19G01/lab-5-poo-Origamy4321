//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef LAB_5_POO_ORIGAMY4321_VENDEDOR_H
#define LAB_5_POO_ORIGAMY4321_VENDEDOR_H

#include "Trabajador.h"
class Trabajador;
using namespace std;
class Vendedor: public Trabajador {

private:
    float comision;
    int ventas;

public:

    Vendedor();

    Vendedor(const string &iD, int horasLab, int precioHoras, int annosLaborados, int comision, int ventas);

    float getComision() const;

    void setComision(float comision);

    int getVentas() const;

    void setVentas(int ventas);

    virtual ~Vendedor();

    float calculoComision();

    float calcularSalarioBruto() override;
};


#endif //LAB_5_POO_ORIGAMY4321_VENDEDOR_H

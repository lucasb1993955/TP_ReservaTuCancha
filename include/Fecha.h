#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
    protected:
    int Dia, Mes, Anio;
    public:
        Fecha(int = 0, int = 0, int = 0);
         int getDia();
         int getMes();
         int getAnio();
        void setDia(int);
        void setMes(int);
        void setAnio(int);
        void cargar();
        void mostrar();
};

#endif // FECHA_H_INCLUDED

#include "Excepci�nDivisi�nEntreCero.hpp"

ExcepcionDivisionEntreCero::ExcepcionDivisionEntreCero():mensaje("Se detect� una divisi�n entre cero")
{

}

const char *ExcepcionDivisionEntreCero::get_mensaje()const
{
    return mensaje;
}

#include <iostream>
using namespace std;

enum _retorno { OK, ERROR, NO_IMPLEMENTADA };
typedef enum _retorno TipoRet;
struct _persona {
  string ci;
  string nom;
};
typedef _persona *Persona;
struct _empresa {
  /*aquí deben figurar los
  campos que usted considere
  necesarios para manipular
  la empresa*/
};
typedef _empresa *Empresa;

TipoRet CrearOrg(Empresa &e, string cargo) { return NO_IMPLEMENTADA; }
TipoRet NuevoCargo(Empresa &e, string cargoPadre, string nuevoCargo) {
  return NO_IMPLEMENTADA;
}
TipoRet EliminarCargo(Empresa &e, string cargo) { return NO_IMPLEMENTADA; }
TipoRet ListarCargosAlf(Empresa e) { return NO_IMPLEMENTADA; }
TipoRet ListarJerarquia(Empresa e) { return NO_IMPLEMENTADA; }
TipoRet AsignarPersona(Empresa &e, string cargo, string nom, string ci) {
  return NO_IMPLEMENTADA;
}
TipoRet EliminarPersona(Empresa &e, string ci) { return NO_IMPLEMENTADA; }
TipoRet ReasignarPersona(Empresa &e, string cargo, string ci) {
  return NO_IMPLEMENTADA;
}
TipoRet ListarPersonas(Empresa e, string cargo) { return NO_IMPLEMENTADA; }
TipoRet ListarSuperCargos(Empresa e, string cargo) { return NO_IMPLEMENTADA; }

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
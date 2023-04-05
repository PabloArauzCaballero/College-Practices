#include <iostream>
#include <string>
using namespace std;

// Creando las clases pricipales
class Moneda {
	
};

class Pregunta {

};

class Opcion {

};

class Respuesta {

};

class Usuario {
public: Usuario(string IDUsuario, string nombre, string apellidoPaterno, string apellidoMaterno, string contrasena,
	string fechaRegistro, string montoAhorrado, string sexo, string fechaNacimiento, string telefono, string codigoPais,
	string pais, Moneda monedaPatron);
private:
	string IDUsuario;
	string nombre;
	string apellido_Paterno;
	string apellido_Materno;
	string contrasena;
	string fechaRegistro;
	string montoAhorrado;
	string sexo;
	string fechaNacimiento;
	string telefono;
	string codigoPais;
	string pais;
	Moneda monedaPatron;
public:
	string getIDUsaurio();
	string getNombre();
	string getApellido_Paterno();
	string getApellido_Materno();
	string getContrasena();
	string getFechaRegistro();
	string getMontoAhorrado();
	string getSexo();
	string getFechaNacimiento();
	string getTelefono();
	string getCodigoPais();
	string getPais();
	Moneda getMonedaPatron();
};
Usuario::Usuario(string IDUsuario, string nombre, string apellidoPaterno, string apellidoMaterno, string contrasena,
	string fechaRegistro, string montoAhorrado, string sexo, string fechaNacimiento, string telefono, string codigoPais,
	string pais, Moneda monedaPatron){
	this->IDUsuario= IDUsuario;
	this->nombre= nombre;
	this->apellido_Paterno= apellido_Paterno;
	this->apellido_Materno= apellido_Materno;
	this->contrasena= contrasena;
	this->fechaRegistro= fechaRegistro;
	this->montoAhorrado= montoAhorrado;
	this->sexo= sexo;
	this->fechaNacimiento= fechaNacimiento;
	this->telefono= telefono;
	this->codigoPais= codigoPais;
	this->pais= pais;
	this->monedaPatron= monedaPatron;
}
string Usuario::getIDUsaurio() { return IDUsuario;}
string Usuario::getNombre() { return nombre; }
string Usuario::getApellido_Paterno() { return apellido_Paterno; }
string Usuario::getApellido_Materno() { return apellido_Materno; }
string Usuario::getContrasena() { return contrasena; }
string Usuario::getFechaRegistro() { return fechaRegistro; }
string Usuario::getMontoAhorrado() { return montoAhorrado; }
string Usuario::getSexo() { return sexo; }
string Usuario::getFechaNacimiento() { return fechaNacimiento; }
string Usuario::getTelefono() { return telefono; }
string Usuario::getCodigoPais() { return codigoPais; }
string Usuario::getPais() { return pais; }
Moneda Usuario::getMonedaPatron() { return monedaPatron;}

class Fecha {
public: Fecha(int dia, int mes, int ano);
public: Fecha(string parametroFechaSQL);
private:
	int mes;
	int dia;
	int ano;
public:
	int getMes();
	int getDia();
	int getAno();
	string toString();
};
Fecha::Fecha(int dia, int mes, int ano) {
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}
Fecha::Fecha(string parametroFechaSQL) {
	char delimitador = '-';
	int fecha[3] = {}, contador = 0, indexParametro = 0;;
	for (int i = 0; i < parametroFechaSQL.length(); i++) {
		if (parametroFechaSQL.at(i) == delimitador) {
			fecha[contador] = stoi(parametroFechaSQL.substr(indexParametro, i));
			indexParametro = i + 1;
			contador++;
			if (contador == 2) fecha[contador] = stoi(parametroFechaSQL.substr(indexParametro));
		}
	}
	this->dia = fecha[0];
	this->mes = fecha[1];
	this->ano = fecha[2];
}
int Fecha::getMes() {return mes;}
int Fecha::getDia() { return dia; }
int Fecha::getAno() { return ano; }
string Fecha::toString(){
	string strMes = to_string(this->mes);
	string strDia = to_string(this->dia);
	if (mes < 10) strMes = "0" + strMes;
	if (dia < 10) strDia = "0" + strDia;
	cout << strMes << endl;
	cout << strDia << endl;
	return to_string(this->ano) + "-" + strMes + "-" + strDia;
}

class Transaccion {
public: Transaccion(string IDTransaccion, string tipoTransaccion, string categoria, string subCategoria,
	string glosa, string temporalidad, string tipoRepeticion, Moneda monedaRegistro, Usuario usuario);
private:
	string IDTransaccion;
	string tipoTransaccion;
	string categoria;
	string subCategoria;
	string glosa;
	string temporalidad;
	string tipoRepeticion;
	Usuario usuario;
	Moneda monedaRegistro;
	// fecha
public:
	string getIDTransaccion();
	string getTipoTransaccion();
	string getCategoria();
	string getSubCategoria();
	string getGlosa();
	string getTemporalidad();
	string getTipoRepeticion();
	Moneda getMonedaRegistro();
	Usuario getUsuario();	
	void setCategoria(string categoria);
	void setGlosa(string glosa);
	void setTipoGasto(string tipoGasto);
};
Transaccion::Transaccion(string IDTransaccion, string tipoTransaccion, string categoria, string subCategoria,
	string glosa, string temporalidad, string tipoRepeticion, Moneda monedaRegistro, Usuario usuario):
		usuario(usuario){
	this->IDTransaccion = IDTransaccion;
	this->tipoTransaccion = tipoTransaccion;
	this->categoria = categoria;
	this->subCategoria = subCategoria;
	this->glosa = glosa;
	this->temporalidad = temporalidad;
	this->tipoRepeticion = tipoRepeticion;  // GOOGLE COLABORATY
	this->monedaRegistro = monedaRegistro;
	this->usuario = usuario;
}
string Transaccion::getIDTransaccion() { return IDTransaccion; }
string Transaccion::getTipoTransaccion() { return tipoTransaccion; }
string Transaccion::getCategoria() { return categoria; }
string Transaccion::getSubCategoria() { return subCategoria; }
string Transaccion::getGlosa() { return glosa; }
string Transaccion::getTemporalidad() { return temporalidad; }
string Transaccion::getTipoRepeticion() { return tipoRepeticion; }
Moneda Transaccion::getMonedaRegistro() { return monedaRegistro; }
Usuario Transaccion::getUsuario() { return usuario;}
void Transaccion::setCategoria(string categoria) { this->categoria = categoria; }
void Transaccion::setGlosa(string glosa) { this->glosa = glosa; }

class Presupuesto {
public:Presupuesto(string IDPresupuesto, string categoria, string subCategoria, string tipo, float montoLim);
	protected:
		string IDPresupuesto;
		string categoria;
		string subCategoria;
		string tipo;
		float montoLim;
	public:
		string getIDPresupuesto();
		string getCategoria();
		string getSubCategoria();
		string getTipo();
		float getMontoLim();
		void setCategoria(string categoria);
		void setSubCategoria(string subCategoria);
		void setTipo(string tipo);
		void setMontoLim(float montoLim);
};
Presupuesto::Presupuesto(string IDPresupuesto, string categoria, string subCategoria, string tipo, float montoLim) {
	this->IDPresupuesto = IDPresupuesto;
	this->categoria = categoria;
	this->subCategoria = subCategoria;
	this->tipo = tipo;
	this->montoLim = montoLim;
}
string Presupuesto::getIDPresupuesto() { return IDPresupuesto; }
string Presupuesto::getCategoria() { return categoria; }
string Presupuesto::getSubCategoria() { return subCategoria; }
string Presupuesto::getTipo() { return tipo; }
float Presupuesto::getMontoLim() { return montoLim; }
void Presupuesto::setCategoria(string categoria) { this->categoria = categoria; }
void Presupuesto::setSubCategoria(string subCategoria) { this->subCategoria = subCategoria; }
void Presupuesto::setTipo(string tipo) { this->tipo = tipo; }
void Presupuesto::setMontoLim(float montoLim) { this->montoLim = montoLim; }
// Creando clases heredadas
class TransaccionPeriodica : public Transaccion{
public: TransaccionPeriodica(string periodicidad, bool vConsulta, string IDTransaccion, 
	string tipoTransaccion, string categoria, string subCategoria, string glosa, 
	string temporalidad, string tipoRepeticion, Moneda monedaRegistro, Usuario usuario);
private: 
	string periodicidad;
	bool vConsulta; // Consulta si desea ser notificado cuando 
public:
	string getPeriodicidad();
	bool getVConsulta();
};
TransaccionPeriodica::TransaccionPeriodica(string periodicidad, bool vConsulta, string IDTransaccion, 
	string tipoTransaccion, string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario):Transaccion(IDTransaccion,
		tipoTransaccion, categoria, subCategoria,glosa, temporalidad, tipoRepeticion,
		monedaRegistro, usuario){
	this->periodicidad = periodicidad;
	this->vConsulta = vConsulta;
}
string TransaccionPeriodica::getPeriodicidad() { return periodicidad; }
bool TransaccionPeriodica::getVConsulta() { return vConsulta; }

class TransaccionTemporalidadFija : public Transaccion {
public: TransaccionTemporalidadFija(float monto, string IDTransaccion,string tipoTransaccion, 
	string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario);
private:
	float monto;
public:
	float getMonto();
};
TransaccionTemporalidadFija::TransaccionTemporalidadFija(float monto, string IDTransaccion,
	string tipoTransaccion, string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario) :Transaccion(IDTransaccion,
		tipoTransaccion, categoria, subCategoria, glosa, temporalidad, tipoRepeticion,
		monedaRegistro, usuario) {
	this->monto = monto;
}
float TransaccionTemporalidadFija::getMonto() { return monto; }

class TransaccionTemporalidadVariable : public Transaccion {
public: TransaccionTemporalidadVariable(float precio, float cantidad, string IDTransaccion,
	string tipoTransaccion, string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario);
private:
	float precio;
	float cantidad;
public:
	float getPrecio();
	float getCantidad();
};
TransaccionTemporalidadVariable::TransaccionTemporalidadVariable(float precio,float cantidad, string IDTransaccion,
	string tipoTransaccion, string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario) :Transaccion(IDTransaccion,
		tipoTransaccion, categoria, subCategoria, glosa, temporalidad, tipoRepeticion,
		monedaRegistro, usuario) {
	this->precio = precio;
	this->cantidad = cantidad;
}
float TransaccionTemporalidadVariable::getPrecio() { return precio; }
float TransaccionTemporalidadVariable::getCantidad() { return cantidad; }

void main() {
	Fecha fecha = Fecha("12-07-2021");
	cout << fecha.toString() << endl;
}

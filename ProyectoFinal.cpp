#include <iostream>
#include <string>
using namespace std;

// Creando las clases pricipales
class Gasto {
public: Gasto(string IDIngreso, string categoria, string subcategoria, string glosa, string tipoGasto);
private:
	string categoria;
	string subCategoria;
	string IDGasto;
	string glosa;
	string tipoGasto; 
	// fecha
public:
	string getCategoria();
	string getSubCategoria();
	string getIDGasto();
	string getGlosa();
	string getTipoGasto();
	void setCategoria(string categoria);
	void setGlosa(string glosa);
	void setTipoGasto(string tipoGasto);
};
Gasto::Gasto(string IDGasto, string categoria, string subcategoria, string glosa, string tipoGasto) {
	this->IDGasto = IDGasto;
	this->categoria = categoria;
	this->subCategoria = subCategoria;
	this->glosa = glosa;
	this->tipoGasto = tipoGasto;
}
string Gasto::getCategoria() { return categoria; }
string Gasto::getSubCategoria() { return subCategoria; }
string Gasto::getIDGasto() { return IDGasto; }
string Gasto::getGlosa() { return glosa; }
string Gasto::getTipoGasto() { return tipoGasto; }
void Gasto::setCategoria(string categoria) { this->categoria = categoria; }
void Gasto::setGlosa(string glosa) { this->glosa = glosa; }
void Gasto::setTipoGasto(string tipoGasto) { this->tipoGasto = tipoGasto; }

class Ingreso {
public:Ingreso(string IDIngreso, string categoria, string subCategoria, string glosa, string tipoIngreso);
private:
	string categoria;
	string subCategoria;
	string IDIngreso;
	string glosa;
	string tipoIngreso;
	// fecha
public:
	string getCategoria();
	string getSubCategoria();
	string getIDIngreso();
	string getGlosa();
	string getTipoIngreso();
	void setCategoria(string categoria);
	void setGlosa(string glosa);
	void setTipoIngreso(string tipoIngreso);
};
Ingreso::Ingreso(string IDIngreso, string categoria, string subCategoria, string glosa, string tipoIngreso) {
	this->IDIngreso = IDIngreso;
	this->categoria = categoria;
	this->glosa = glosa;
	this->tipoIngreso = tipoIngreso;
	this->subCategoria = subCategoria;
}
string Ingreso::getCategoria() { return categoria; }
string Ingreso::getSubCategoria() { return subCategoria; }
string Ingreso::getIDIngreso() { return IDIngreso; }
string Ingreso::getGlosa() { return glosa; }
string Ingreso::getTipoIngreso() { return tipoIngreso; }
void Ingreso::setCategoria(string categoria) { this->categoria = categoria; }
void Ingreso::setGlosa(string glosa) { this->glosa = glosa; }
void Ingreso::setTipoIngreso(string tipoGasto) { this->tipoIngreso = tipoIngreso; }

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
class GastoFijo : public Gasto {
public:GastoFijo(float Monto, string tipoRepeticion, string IDIngreso, string categoria, string subcategoria, 
	string glosa, string tipoGasto);
private:
	float monto;
	string tipoRepeticion;
public:
	float getMonto();
	string getTipoRepeticion();
	void setMonto(float monto);
	void setTipoRepeticion(string tipoRepeticion);
};
GastoFijo::GastoFijo(float Monto, string tipoRepeticion, string IDIngreso, string categoria, string subcategoria,
	string glosa, string tipoGasto):Gasto(IDIngreso, categoria, subcategoria,glosa, tipoGasto) {
	this->monto = monto;
	this->tipoRepeticion = tipoRepeticion;
}
float GastoFijo::getMonto() { return monto; }
string GastoFijo::getTipoRepeticion() { return tipoRepeticion; }
void GastoFijo::setMonto(float monto) { this->monto = monto; }
void GastoFijo::setTipoRepeticion(string tipoRepeticion) { this->tipoRepeticion = tipoRepeticion; }

class IngresoFijo : public Ingreso {
public:IngresoFijo(float monto, string tipoRepeticion, string IDIngreso, string categoria, string subCategoria, 
	string glosa, string tipoIngreso);
private:
	float monto;
	string tipoRepeticion;
public:
	float getMonto();
	string getTipoRepeticion();
	void setMonto(float monto);
	void setTipoRepeticion(string tipoRepeticion);
};
IngresoFijo::IngresoFijo(float monto, string tipoRepeticion, string IDIngreso, string categoria, string subCategoria,
	string glosa, string tipoIngreso):Ingreso(IDIngreso, categoria, subCategoria, glosa, tipoIngreso) {
	this->monto = monto;
	this->tipoRepeticion = tipoRepeticion;
}
float IngresoFijo::getMonto() { return monto; }
string IngresoFijo::getTipoRepeticion() { return tipoRepeticion; }
void IngresoFijo::setMonto(float monto) { this->monto = monto; }
void IngresoFijo::setTipoRepeticion(string tipoRepeticion) { this->tipoRepeticion = tipoRepeticion; }

class GastoVariable : public Gasto {
public:GastoVariable(float montoVariable, float cantidad, string tipoRepeticion, string IDGasto, string categoria, 
	string subcategoria, string glosa, string tipoGasto);
private:
	float montoVariable;
	float cantidad;
	string tipoRepeticion;
public:
	float getMontoVariable();
	float getCantidad();
	string getTipoRepeticion();
	void setMonto(float montoVariable);
	void setCantidad(float cantidad);
	void setTipoRepeticion(string tipoRepeticion);
};
GastoVariable::GastoVariable(float montoVariable, float cantidad, string tipoRepeticion, string IDGasto, string categoria,
	string subcategoria, string glosa, string tipoGasto) : Gasto(IDGasto, categoria, subcategoria, glosa,tipoGasto) {
	this->montoVariable = montoVariable;
	this->cantidad = cantidad;
	this->tipoRepeticion = tipoRepeticion;
}
float GastoVariable::getMontoVariable() { return montoVariable; }
string GastoVariable::getTipoRepeticion() { return tipoRepeticion; }
void GastoVariable::setMonto(float monto) { this->montoVariable = montoVariable; }
void GastoVariable::setTipoRepeticion(string tipoRepeticion) { this->tipoRepeticion = tipoRepeticion; }

class GastoVariablePeriodico :public GastoVariable {
private:
	bool vConfirmacion;
	string periodicidad;
public:
	bool getVConfirmacion();
	string getVPeriodicidad();
	void setVConfirmacion(bool vConfirmacion);
	void setConfirmacion(string periodicidad);
};
bool GastoVariablePeriodico::getVConfirmacion() { return vConfirmacion; }
string GastoVariablePeriodico::getVPeriodicidad() { return periodicidad; }
void GastoVariablePeriodico::setVConfirmacion(bool vConfirmacion) { this->vConfirmacion = vConfirmacion; }
void GastoVariablePeriodico::setConfirmacion(string periodicidad) { this->periodicidad = periodicidad; }

class IngresoVariable : public Ingreso {
public:IngresoVariable(float montoVariable, float cantidad, string tipoRepeticion, string IDIngreso, string categoria, 
	string subCategoria, string glosa, string tipoIngreso);
private:
	float montoVariable;
	float cantidad;
	string tipoRepeticion;
public:
	float getMontoVariable();
	float getCantidad();
	string getTipoRepeticion();
	void setMonto(float montoVariable);
	void setCantidad(float cantidad);
	void setTipoRepeticion(string tipoRepeticion);
};
IngresoVariable::IngresoVariable(float montoVariable, float cantidad, string tipoRepeticion, string IDIngreso, 
	string categoria, string subCategoria, string glosa, string tipoIngreso):Ingreso(IDIngreso, categoria, 
		subCategoria, glosa, tipoIngreso) {
	this->montoVariable = montoVariable;
	this->cantidad = cantidad;
	this->tipoRepeticion = tipoRepeticion;
}
float IngresoVariable::getMontoVariable() { return montoVariable; }
string IngresoVariable::getTipoRepeticion() { return tipoRepeticion; }
void IngresoVariable::setMonto(float monto) { this->montoVariable = montoVariable; }
void IngresoVariable::setTipoRepeticion(string tipoRepeticion) { this->tipoRepeticion = tipoRepeticion; }


class IngresoVariablePeriodico :public IngresoVariable {
public:IngresoVariablePeriodico(bool vConfirmacion, string periodicidad, string IDIngreso, string categoria, 
	string subCategoria, string glosa, string tipoIngreso);
private:
	bool vConfirmacion;
	string periodicidad;
public:
	bool getVConfirmacion();
	string getVPeriodicidad();
	void setVConfirmacion(bool vConfirmacion);
	void setConfirmacion(string periodicidad);
};
bool IngresoVariablePeriodico::getVConfirmacion() { return vConfirmacion; }
string IngresoVariablePeriodico::getVPeriodicidad() { return periodicidad; }
void IngresoVariablePeriodico::setVConfirmacion(bool vConfirmacion) { this->vConfirmacion = vConfirmacion; }
void IngresoVariablePeriodico::setConfirmacion(string periodicidad) { this->periodicidad = periodicidad; }


class PresupuestoGasto : public Presupuesto {
	private: Gasto gasto;
	public:PresupuestoGasto(Gasto gastoEntrada, string IDPresupuesto, string categoria, string subCategoria,
		string tipo, float montoLim);
	public:
		Gasto getGasto();
		void setGasto(Gasto gasto);
};
PresupuestoGasto::PresupuestoGasto(Gasto gastoEntrada, string IDPresupuesto, string categoria, string subCategoria, 
		string tipo, float montoLim):Presupuesto(IDPresupuesto, categoria, subCategoria, tipo, montoLim), 
		gasto (gastoEntrada) {

}
Gasto PresupuestoGasto::getGasto() { return gasto; }
void PresupuestoGasto::setGasto(Gasto gasto) { this->gasto= gasto; }


class PresupuestoIngreso : public Presupuesto {
	private: Ingreso ingreso;
	public:PresupuestoIngreso(Ingreso ingresoEntrada, string IDPresupuesto, string categoria, string subCategoria,
		string tipo, float montoLim);
	public: 
		Ingreso getIngreso();
		void setIngreso(Ingreso ingreso);

};
PresupuestoIngreso::PresupuestoIngreso(Ingreso ingresoEntrada, string IDPresupuesto,string categoria, string subCategoria,
		string tipo, float montoLim):Presupuesto (IDPresupuesto, categoria, subCategoria, tipo,
		montoLim), ingreso(ingresoEntrada) {
	this->ingreso = ingresoEntrada;
}
Ingreso PresupuestoIngreso::getIngreso() { return ingreso; }
void PresupuestoIngreso::setIngreso(Ingreso ingreso) { this->ingreso=ingreso; }

class Fecha {
private:

};

void main() {

}

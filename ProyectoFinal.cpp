#include <iostream>
#include <string>
using namespace std;

// Creando las clases pricipales
template <typename T>
struct Nodo {
	T dato;
	Nodo* siguiente;
};
template <typename T>
class ListaEnlazada {
private:
	Nodo<T>* cabeza;
	int longitud;

public:
	ListaEnlazada() {
		cabeza = nullptr;
		longitud = 0;
	}
	~ListaEnlazada() {
		Nodo<T>* actual = cabeza;
		while (actual != nullptr) {
			Nodo<T>* siguiente = actual->siguiente;
			delete actual;
			actual = siguiente;
		}
	}
	void agregar(T valor) {
		Nodo<T>* nuevoNodo = new Nodo<T>();
		nuevoNodo->dato = valor;
		nuevoNodo->siguiente = nullptr;
		if (cabeza == nullptr) { cabeza = nuevoNodo; }
		else {
			Nodo<T>* actual = cabeza;
			while (actual->siguiente != nullptr) { actual = actual->siguiente; }
			actual->siguiente = nuevoNodo;
		}
		longitud++;
	}
	void eliminar(int indice) {
		if (indice < 0 || indice >= longitud) {
			return;
		}
		Nodo<T>* actual = cabeza;
		Nodo<T>* anterior = nullptr;
		for (int i = 0; i < indice; i++) {
			anterior = actual;
			actual = actual->siguiente;
		}
		if (anterior == nullptr) { cabeza = actual->siguiente; }
		else { anterior->siguiente = actual->siguiente; }
		delete actual;
		longitud--;
	}
	void modificar(int indice, T valor) {
		if (indice < 0 || indice >= longitud) { return; }
		Nodo<T>* actual = cabeza;
		for (int i = 0; i < indice; i++) { actual = actual->siguiente; }
		actual->dato = valor;
	}
	T obtener(int indice) {
		if (indice < 0 || indice >= longitud) { return T(); }
		Nodo<T>* actual = cabeza;
		for (int i = 0; i < indice; i++) { actual = actual->siguiente; }
		return actual->dato;
	}
	int longitudLista() { return longitud; }
};
static class FuncionRestricta {
public:

};

class Moneda {
public:Moneda(string nombre, string contraccion, float lastValueInDollar);
private:
	string nombre;
	string contraccion;
	float lastValueInDollar;
public: string toString();
};
Moneda::Moneda(string nombre, string contraccion, float lastValueInDollar) {
	this->nombre;
	this->contraccion;
	this->lastValueInDollar;
}
string Moneda:: toString() { return this->contraccion;}

class Pregunta {
public:Pregunta(string ID_Pregunta, string nombre, string aspecto, int poderacion);
private:
	string ID_Pregunta;
	string nombre;
	string aspecto;
	int ponderacion;
public:
	string getID_Pregunta();
	string getNombre();
	string getAspecto();
	int	getPonderacion();
};
Pregunta::Pregunta(string ID_Pregunta, string nombre, string aspecto, int poderacion) {
	this->ID_Pregunta = ID_Pregunta;
	this->nombre = nombre;
	this->aspecto = aspecto;
	this->ponderacion = ponderacion;
}
string Pregunta::getID_Pregunta() { return this->ID_Pregunta; }
string Pregunta::getNombre() { return this->nombre; }
string Pregunta::getAspecto() { return this->aspecto; }
int Pregunta::getPonderacion() { return this->ponderacion; }

class Opcion {
public:Opcion(string ID_Opcion, string nombre, int calificacion, Pregunta pregunta);
private:
	string ID_Opcion;
	string nombre;
	int	calificacion;
	Pregunta pregunta;
public:
	string getID_Opcion();
	string getNombre();
	int	getCalificacion();
	Pregunta getPregunta();
};
Opcion::Opcion(string ID_Opcion, string nombre, int calificacion, Pregunta _pregunta): pregunta(_pregunta) {
	this->ID_Opcion = ID_Opcion;
	this->nombre = nombre;
	this->calificacion = calificacion;
	this->pregunta = _pregunta;
}
string Opcion::getID_Opcion() { return this->ID_Opcion; }
string Opcion::getNombre() { return this->nombre; }
int Opcion::getCalificacion() { return this->calificacion; }
Pregunta Opcion::getPregunta() { return this->pregunta; }

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
	string pais, Moneda monedaPatron) : monedaPatron(monedaPatron) {
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
public: 
	Transaccion(string IDTransaccion, string tipoTransaccion, string categoria, 
	string subCategoria, string glosa, string temporalidad, string tipoRepeticion, 
	Moneda monedaRegistro, Usuario usuario, Fecha fecha);
	Transaccion (string parametros[],Usuario usuario, Moneda moneda, Fecha fecha);
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
	int ponderacion;  
	bool compararValidacion(float importancia1, float gasto1, float importncia2, 
		float gasto2);
	// En el caso de gasto hara referencia al valor que se le asgina al gasto
	// En el caso del ingreso hace referencia al valor que se el asigna al ingreso
	Fecha fecha;
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
	Fecha getFechaRegistro();
	void setCategoria(string categoria);
	void setGlosa(string glosa);
	void setTipoGasto(string tipoGasto);
	bool compararTransacciones(Transaccion transaccion1, Transaccion transaccion2);
};
Transaccion::Transaccion(string IDTransaccion, string tipoTransaccion, string categoria, 
	string subCategoria,string glosa, string temporalidad, string tipoRepeticion, 
	Moneda monedaRegistro, Usuario usuario, Fecha fecha):
		usuario(usuario), monedaRegistro(monedaRegistro), fecha(fecha) {
	this->IDTransaccion = IDTransaccion;
	this->tipoTransaccion = tipoTransaccion;
	this->categoria = categoria;
	this->subCategoria = subCategoria;
	this->glosa = glosa;
	this->temporalidad = temporalidad;
	this->tipoRepeticion = tipoRepeticion;  // GOOGLE COLABORATY
	this->monedaRegistro = monedaRegistro;
	this->usuario = usuario;
	this->fecha = fecha;
}
Transaccion::Transaccion(string parametros[], Usuario usuario, Moneda moneda, Fecha fecha): 
		usuario(usuario),monedaRegistro(moneda),fecha(fecha) {
	this->IDTransaccion = parametros[0];
	this->tipoTransaccion = parametros[2];
	this->categoria = parametros[3];
	this->subCategoria = parametros[4];
	this->glosa = parametros[5];
	this->temporalidad = parametros[6];
	this->tipoRepeticion = parametros[9];
	this->monedaRegistro = moneda;
	this->usuario = usuario;
	this->fecha = fecha;
}
string Transaccion::getIDTransaccion() { return this->IDTransaccion; }
string Transaccion::getTipoTransaccion() { return this->tipoTransaccion; }
string Transaccion::getCategoria() { return this->categoria; }
string Transaccion::getSubCategoria() { return this->subCategoria; }
string Transaccion::getGlosa() { return this->glosa; }
string Transaccion::getTemporalidad() { return this->temporalidad; }
string Transaccion::getTipoRepeticion() { return this->tipoRepeticion; }
Moneda Transaccion::getMonedaRegistro() { return this->monedaRegistro; }
Usuario Transaccion::getUsuario() { return this->usuario;}
Fecha Transaccion::getFechaRegistro() { return this->fecha;}
void Transaccion::setCategoria(string categoria) { this->categoria = categoria; }
void Transaccion::setGlosa(string glosa) { this->glosa = glosa; }
bool Transaccion::compararValidacion(float importancia1, float monto1, 
	float importncia2,float monto2) {
	// Es economicamente correcto
	if (importancia1 > importncia2) return monto1 >= monto2;
	if (importncia2 > importancia1) return monto2 >= monto1;
	return NULL;
}
bool Transaccion::compararTransacciones(Transaccion transaccion1, Transaccion transaccion2) {
	if (transaccion1.getTipoTransaccion() == transaccion2.getTipoTransaccion()) {
		if (transaccion1.getTipoTransaccion()=="Fijo") {

		}
		if (transaccion1.getTipoTransaccion() == "Variable") {

		}
		if (transaccion1.getTipoTransaccion() == "Periodico") {

		}
	}
	else return NULL;
}

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
	string temporalidad, string tipoRepeticion, Moneda monedaRegistro, Usuario usuario,  
	Fecha fecha);
private: 
	string periodicidad;
	bool vConsulta; // Consulta si desea ser notificado cuando 
public:
	string getPeriodicidad();
	bool getVConsulta();
};
TransaccionPeriodica::TransaccionPeriodica(string periodicidad, bool vConsulta, string IDTransaccion, 
	string tipoTransaccion, string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario, Fecha fecha):Transaccion (IDTransaccion,
		tipoTransaccion, categoria, subCategoria,glosa, temporalidad, tipoRepeticion, 
		monedaRegistro, usuario,fecha){
	this->periodicidad = periodicidad;
	this->vConsulta = vConsulta;
}
string TransaccionPeriodica::getPeriodicidad() { return periodicidad; }
bool TransaccionPeriodica::getVConsulta() { return vConsulta; }

class TransaccionTemporalidadFija : public Transaccion {
public: TransaccionTemporalidadFija(float monto, string IDTransaccion,string tipoTransaccion, 
	string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario, Fecha fecha);
private:
	float monto;
public:
	float getMonto();
};
TransaccionTemporalidadFija::TransaccionTemporalidadFija(float monto, string IDTransaccion,
	string tipoTransaccion, string categoria, string subCategoria, string glosa, 
	string temporalidad, string tipoRepeticion, Moneda monedaRegistro, 
	Usuario usuario, Fecha fecha):Transaccion(IDTransaccion,tipoTransaccion, categoria, 
		subCategoria, glosa, temporalidad, tipoRepeticion, monedaRegistro, usuario, fecha) {
	this->monto = monto;
}
float TransaccionTemporalidadFija::getMonto() { return monto; }

class TransaccionTemporalidadVariable : public Transaccion {
public: TransaccionTemporalidadVariable(float precio, float cantidad, string IDTransaccion,
	string tipoTransaccion, string categoria, string subCategoria, string glosa, 
	string temporalidad, string tipoRepeticion, Moneda monedaRegistro, Usuario usuario,
	Fecha fecha);
private:
	float precio;
	float cantidad;
public:
	float getPrecio();
	float getCantidad();
};
TransaccionTemporalidadVariable::TransaccionTemporalidadVariable(float precio,float cantidad, string IDTransaccion,
	string tipoTransaccion, string categoria, string subCategoria, string glosa, string temporalidad,
	string tipoRepeticion, Moneda monedaRegistro, Usuario usuario, Fecha fecha) :Transaccion(
		IDTransaccion, tipoTransaccion, categoria, subCategoria, glosa, temporalidad, 
		tipoRepeticion, monedaRegistro, usuario, fecha) {
	this->precio = precio;
	this->cantidad = cantidad;
}
float TransaccionTemporalidadVariable::getPrecio() { return precio; }
float TransaccionTemporalidadVariable::getCantidad() { return cantidad; }

class Respuesta {
public:Respuesta(string respuesta, Opcion _opcionSeleccionada, Usuario _usuario, 
		Transaccion _transaccionConsultada);
private:
	string IDResputas;
	Opcion opcionSeleccionada;
	Usuario usuario;
	Transaccion transaccionConsultada;
public:
	Opcion getOpcionSeleccionada();
	Usuario getUsuario();
	Transaccion getTransaccionConsultada();
};
Respuesta::Respuesta(string ID_Respuesta, Opcion _opcionSeleccionada, Usuario _usuario, 
		Transaccion _transaccionConsultada):
	opcionSeleccionada(_opcionSeleccionada), usuario(_usuario) , 
	transaccionConsultada(_transaccionConsultada) {
	this->IDResputas = ID_Respuesta;
	this->opcionSeleccionada = _opcionSeleccionada;
	this->usuario = usuario;
	this->transaccionConsultada = transaccionConsultada;
}
Opcion Respuesta::getOpcionSeleccionada() { return this->opcionSeleccionada; }
Usuario Respuesta::getUsuario() { return this->usuario; }
Transaccion Respuesta::getTransaccionConsultada() { return this->transaccionConsultada; }

class ConexionDB {
public: 
	virtual void conectar() = 0;
	virtual void desconectar() = 0;
	virtual void ejecutarTransaccion() = 0;
	virtual void ejecutarRegistroEnDB(string SQLStatement) = 0;
	virtual string ejecutarConsultaEnDB(string SQLStatement) = 0;
	virtual	void registrarTransaccion(Transaccion transaccion) = 0;
	virtual void registrarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) = 0;
	virtual void registrarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) = 0;
	virtual void registrarTransaccionPeriodica(TransaccionPeriodica transaccionP) =0;
	virtual void registrarUsuario(Usuario usuario)= 0;
	virtual void registrarRespuesta(Respuesta respuesta) = 0;
	virtual void registrarPresupuesto(Presupuesto presupuesto) = 0;
	virtual	void modificarTransaccion(Transaccion transaccion) = 0;
	virtual void modificarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) = 0;
	virtual void modificarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) = 0;
	virtual void modificarTransaccionPeriodica(TransaccionPeriodica transaccionP) = 0;
	virtual void modificarUsuario(Usuario usuario) = 0;
	virtual void modificarRespuesta(Respuesta respuesta) = 0;
	virtual void modificarPresupuesto(Presupuesto prespuesto) = 0;
	virtual	void eliminarTransaccion(Transaccion transaccion) = 0;
	virtual void eliminarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) = 0;
	virtual void eliminarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) = 0;
	virtual void eliminarTransaccionPeriodica(TransaccionPeriodica transaccionP) = 0;
	virtual void eliminarUsuario(Usuario usuario) = 0;
	virtual void eliminarRespuesta(Respuesta respuesta) = 0;
	virtual void eliminarPresupuesto(Presupuesto presupuesto) = 0;
	virtual	Transaccion buscarTransaccion(string ID_Transaccion, Usuario usuario) = 0;
	virtual TransaccionTemporalidadFija buscarTransaccionFija(string ID_Transaccion) = 0;
	virtual TransaccionTemporalidadVariable buscarTransaccionVariable(string ID_Transaccion) = 0;
	virtual TransaccionPeriodica buscarTransaccionPeriodica(string ID_Transaccion) = 0;
	virtual Usuario buscarUsuario(string ID_Usuario) = 0;
	virtual Respuesta buscarRespuesta(string ID_Usuario, string ID_Transaccion, string ID_Opcion) = 0;
	virtual Opcion buscarOpcion(string ID_Pregunta, string ID_Opcion) = 0;
	virtual Pregunta buscarPregunta(string ID_Pregunta) = 0;
};

class ConexionDBSQLServer : public ConexionDB {
private:
	static string generarSeparadoresCasoInsert(int large);
	static string generarSeparadoresCasoUpdate(int large);
	static string generarConsultaCaseInsert(string elementos[], string baseStatement);
	static string generarConsultaCaseUpdate(string elementos[], string columnName[],
		string baseStatement);
	static string generarConsultaCaseDelete(string elementID, string columnElementID,
		string baseStatement);
	static string generarConsultaCaseSelect(string elementID, string columnElementID,
		string baseStatement, string nameColumn);
	const string NOMBRE_TABLA_TRANSACCIONES = "TRANSACCIONES";
	const string NOMBRE_TABLA_RESPUESTA = "RESPUESTAS";
	const string NOMBRE_TABLA_PREGUNTAS = "PREGUNTAS";
	const string NOMBRE_TABLA_OPCIONES = "OPCIONES";
	const string NOMBRE_TABLA_USUARIOS = "USUARIOS";
	const string NOMBRE_TABLA_PRESUPUESTOS = "PRESUPUESTOS";
	const string NOMBRE_TABLA_TRANSACCION_FIJA = "TRANSACCION FIJA";
	const string NOMBRE_TABLA_TRANSACCION_VARIABLE = "TRANSACCION VARIABLE";
	const string NOMBRE_TABLA_TRANSACCION_PERIODICA = "TRANSACCION PERIODICA";
	const static int CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES = 10;
	const static int CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS = 4;
	const static int CANTIDAD_ARGUMENTOS_TABLA_PREGUNTAS = 5;
	const static int CANTIDAD_ARGUMENTOS_TABLA_OPCIONES = 4;
	const static int CANTIDAD_ARGUMENTOS_TABLA_USUARIOS = 13;
	const static int CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS = 6;
	const static int CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA = 2;
	const static int CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE = 3;
	const static int CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA = 3;
	string NOMBRE_COLUMNAS_TRANSACCION[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES] = {
		"ID_Transaccion","Fecha","Tipo_Transaccion","Categoria","Sub_Categoria","Glosa",
		"Temporalidad","Moneda_Registro","ID_Usuario","Ponderacion" };
	string NOMBRE_COLUMNAS_RESPUESTA[CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS] = {"ID_Respuesta","ID_Opcion","ID_Transaccion",
		"ID_Usuario"};
	string NOMBRE_COLUMNAS_PREGUNTAS [CANTIDAD_ARGUMENTOS_TABLA_PREGUNTAS] = {"ID_Pregunta","Nombre",
		"Aspecto","Ponderacion","Tipo"};
	string NOMBRE_COLUMNAS_OPCIONES[CANTIDAD_ARGUMENTOS_TABLA_OPCIONES] = {"ID_Opcion","ID_Pregunta","Nombre",
			"Calificacion"};
	string NOMBRE_COLUMNAS_USUARIO [CANTIDAD_ARGUMENTOS_TABLA_USUARIOS] = {"ID_Usuario","Nombre",
		"Apellido_Paterno","Apellido_Materno","Contrasena","Fecha_Registro","Monto_Ahorrado","Sexo",
		"Fecha_Nacimiento","Telefono","Codigo_Pais","Pais",	"Moneda_Patron"};
	string NOMBRE_COLUMNAS_PRESUPUESTO [CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS] = {"ID_Presupuesto","Categoria","Sub_Categoria","Tipo","Monto_Lim",
		"ID_Usuario"};
	string NOMBRE_COLUMNAS_TRANSACCION_FIJA [CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA] = {
		"ID_Transaccion","Monto"};
	string NOMBRE_COLUMNAS_TRANSACCION_VARIABLE [CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE] = {
		"ID_Transaccion","Precio","Cantidad"};
	string NOMBRE_COLUMNAS_TRANSACCION_PERIODICA [CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA] = {
		"ID_Transaccion","Periodicidad","V_Repeti0cion"};
public: 
	static string generarConsulta(int large, string tableName, string elementos[]);
	static string generarConsulta(int large, string tableName, string elementos[], string columnName[]);
	static string generarConsulta(string elementID, string columnElementID, string tableName);
	static string generarConsulta(string tableName, string elementID, string columnName, 
		string columnElementID);
public:
	void conectar() override {

	}
	void desconectar() override {

	}
	void ejecutarRegistroEnDB(string SQLStatement) override {

	}
	string ejecutarConsulta(string SQLStatement) {

	}
	void registrarTransaccion(Transaccion transaccion) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES] = { transaccion.getIDTransaccion(), transaccion.getTipoTransaccion(),
		transaccion.getSubCategoria(),transaccion.getSubCategoria(),transaccion.getGlosa(),
		transaccion.getTemporalidad(),transaccion.getMonedaRegistro().toString(),
			transaccion.getUsuario().getIDUsaurio() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES,
			NOMBRE_TABLA_TRANSACCIONES,entrada));
	}
	void registrarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA] = {
			transaccionFJ.getIDTransaccion(),to_string(transaccionFJ.getMonto())};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA,
			NOMBRE_TABLA_TRANSACCION_FIJA,entrada));
	}
	void registrarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE] = {
			transaccionV.getIDTransaccion(), to_string(transaccionV.getPrecio()),
			to_string(transaccionV.getCantidad())};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE,
			NOMBRE_TABLA_TRANSACCION_VARIABLE, entrada));
	}
	void registrarTransaccionPeriodica(TransaccionPeriodica transaccionP) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA] = {
			transaccionP.getIDTransaccion(), transaccionP.getPeriodicidad(),
			to_string(transaccionP.getVConsulta())};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA,
			NOMBRE_TABLA_TRANSACCION_PERIODICA,entrada));
	}
	void registrarUsuario(Usuario usuario) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_USUARIOS]={usuario.getIDUsaurio(),
			usuario.getNombre(),usuario.getApellido_Paterno(),usuario.getApellido_Materno(),
			usuario.getContrasena(),usuario.getFechaRegistro(),usuario.getMontoAhorrado(),
			usuario.getSexo(),usuario.getFechaNacimiento(),usuario.getTelefono(),
			usuario.getCodigoPais(),usuario.getPais(),usuario.getMonedaPatron().toString()};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_USUARIOS,
			NOMBRE_TABLA_USUARIOS, entrada,
			NULL));
	}
	void registrarRespuesta(Respuesta respuesta) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS] = {
			respuesta.getUsuario().getIDUsaurio(),
			respuesta.getTransaccionConsultada().getIDTransaccion(),
			respuesta.getOpcionSeleccionada().getID_Opcion() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS,
			NOMBRE_TABLA_RESPUESTA,entrada));
	}
	void registrarTransaccion(Transaccion transaccion) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES] = { transaccion.getIDTransaccion(), transaccion.getTipoTransaccion(),
		transaccion.getSubCategoria(),transaccion.getSubCategoria(),transaccion.getGlosa(),
		transaccion.getTemporalidad(),transaccion.getMonedaRegistro().toString(),
			transaccion.getUsuario().getIDUsaurio() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES,
			NOMBRE_TABLA_TRANSACCIONES,entrada));
	}
	void registrarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA] = {
			transaccionFJ.getIDTransaccion(),to_string(transaccionFJ.getMonto())};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA,
			NOMBRE_TABLA_TRANSACCION_FIJA,entrada));
	}
	void registrarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE] = {
			transaccionV.getIDTransaccion(), to_string(transaccionV.getPrecio()),
			to_string(transaccionV.getCantidad())};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE,
			NOMBRE_TABLA_TRANSACCION_VARIABLE, entrada));
	}
	void registrarTransaccionPeriodica(TransaccionPeriodica transaccionP) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA] = {
			transaccionP.getIDTransaccion(), transaccionP.getPeriodicidad(),
			to_string(transaccionP.getVConsulta())};
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA,
			NOMBRE_TABLA_TRANSACCION_PERIODICA, entrada));
	}
	void registrarUsuario(Usuario usuario) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_USUARIOS]={usuario.getIDUsaurio(),
			usuario.getNombre(),usuario.getApellido_Paterno(),usuario.getApellido_Materno(),
			usuario.getContrasena(),usuario.getFechaRegistro(),usuario.getMontoAhorrado(),
			usuario.getSexo(),usuario.getFechaNacimiento(),usuario.getTelefono(),
			usuario.getCodigoPais(),usuario.getPais(),usuario.getMonedaPatron().toString()};
		ejecutarRegistroEnDB(generarConsulta(CANTIDAD_ARGUMENTOS_TABLA_USUARIOS,
			NOMBRE_TABLA_USUARIOS, entrada));
	}
	void registrarRespuesta(Respuesta respuesta) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS] = {
			respuesta.getUsuario().getIDUsaurio(),
			respuesta.getTransaccionConsultada().getIDTransaccion(),
			respuesta.getOpcionSeleccionada().getID_Opcion() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS,
			NOMBRE_TABLA_RESPUESTA, entrada));
	}
	void registrarPresupuesto(Presupuesto presupuesto) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS] = {
		presupuesto.getIDPresupuesto(),presupuesto.getCategoria(),
		presupuesto.getSubCategoria(),to_string(presupuesto.getMontoLim()),presupuesto.getTipo() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS,
			NOMBRE_TABLA_PRESUPUESTOS,entrada));
	}
	/*
	*/
	void modificarTransaccion(Transaccion transaccion) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES] = { transaccion.getIDTransaccion(), transaccion.getTipoTransaccion(),
		transaccion.getSubCategoria(),transaccion.getSubCategoria(),transaccion.getGlosa(),
		transaccion.getTemporalidad(),transaccion.getMonedaRegistro().toString(),
			transaccion.getUsuario().getIDUsaurio() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES,
			NOMBRE_TABLA_TRANSACCIONES, entrada,
			NOMBRE_COLUMNAS_TRANSACCION));
	}
	void modificarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA] = {
			transaccionFJ.getIDTransaccion(),to_string(transaccionFJ.getMonto()) };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA,
			NOMBRE_TABLA_TRANSACCION_FIJA, entrada,
			NOMBRE_COLUMNAS_TRANSACCION_FIJA));
	}
	void modificarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE] = {
			transaccionV.getIDTransaccion(), to_string(transaccionV.getPrecio()),
			to_string(transaccionV.getCantidad()) };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE,
			NOMBRE_TABLA_TRANSACCION_VARIABLE, entrada,
			NOMBRE_COLUMNAS_TRANSACCION_VARIABLE));
	}
	void modificarTransaccionPeriodica(TransaccionPeriodica transaccionP) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA] = {
			transaccionP.getIDTransaccion(), transaccionP.getPeriodicidad(),
			to_string(transaccionP.getVConsulta()) };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA,
			NOMBRE_TABLA_TRANSACCION_PERIODICA, entrada,
			NOMBRE_COLUMNAS_TRANSACCION_PERIODICA));
	}
	void modificarUsuario(Usuario usuario) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_USUARIOS] = { usuario.getIDUsaurio(),
			usuario.getNombre(),usuario.getApellido_Paterno(),usuario.getApellido_Materno(),
			usuario.getContrasena(),usuario.getFechaRegistro(),usuario.getMontoAhorrado(),
			usuario.getSexo(),usuario.getFechaNacimiento(),usuario.getTelefono(),
			usuario.getCodigoPais(),usuario.getPais(),usuario.getMonedaPatron().toString() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_USUARIOS,
			NOMBRE_TABLA_USUARIOS, entrada,
			NOMBRE_COLUMNAS_USUARIO));
	}
	void modificarRespuesta(Respuesta respuesta) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS] = {
			respuesta.getUsuario().getIDUsaurio(),
			respuesta.getTransaccionConsultada().getIDTransaccion(),
			respuesta.getOpcionSeleccionada().getID_Opcion() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS,
			NOMBRE_TABLA_RESPUESTA, entrada,
			NOMBRE_COLUMNAS_RESPUESTA));
	}
	void modificarPresupuesto(Presupuesto presupuesto) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS] = {
		presupuesto.getIDPresupuesto(),presupuesto.getCategoria(),
		presupuesto.getSubCategoria(),to_string(presupuesto.getMontoLim()),presupuesto.getTipo() };
		ejecutarRegistroEnDB(generarConsulta(
			CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS,
			NOMBRE_TABLA_PRESUPUESTOS, entrada,
			NOMBRE_COLUMNAS_PRESUPUESTO));
	}
	/*
	*/
	void eliminarTransaccion(Transaccion transaccion) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES] = { transaccion.getIDTransaccion(), transaccion.getTipoTransaccion(),
		transaccion.getSubCategoria(),transaccion.getSubCategoria(),transaccion.getGlosa(),
		transaccion.getTemporalidad(),transaccion.getMonedaRegistro().toString(),
			transaccion.getUsuario().getIDUsaurio() };
		ejecutarRegistroEnDB(generarConsulta(
			transaccion.getIDTransaccion(),
			NOMBRE_COLUMNAS_TRANSACCION[0], 
			NOMBRE_TABLA_TRANSACCIONES));
	}
	void eliminarTransaccionFija(TransaccionTemporalidadFija transaccionFJ) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA] = {
			transaccionFJ.getIDTransaccion(),to_string(transaccionFJ.getMonto()) };
		ejecutarRegistroEnDB(generarConsulta(
			transaccionFJ.getIDTransaccion(),
			NOMBRE_COLUMNAS_TRANSACCION_FIJA[0],
			NOMBRE_TABLA_TRANSACCION_FIJA));
	}
	void eliminarTransaccionVariable(TransaccionTemporalidadVariable transaccionV) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_VARIABLE] = {
			transaccionV.getIDTransaccion(), to_string(transaccionV.getPrecio()),
			to_string(transaccionV.getCantidad()) };
		ejecutarRegistroEnDB(generarConsulta(
			transaccionV.getIDTransaccion(),
			NOMBRE_COLUMNAS_TRANSACCION_VARIABLE[0],
			NOMBRE_TABLA_TRANSACCION_VARIABLE));
	}
	void eliminarTransaccionPeriodica(TransaccionPeriodica transaccionP) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_PERIODICA] = {
			transaccionP.getIDTransaccion(), transaccionP.getPeriodicidad(),
			to_string(transaccionP.getVConsulta()) };
		ejecutarRegistroEnDB(generarConsulta(
			transaccionP.getIDTransaccion(),
			NOMBRE_COLUMNAS_TRANSACCION_PERIODICA[0],
			NOMBRE_TABLA_TRANSACCION_PERIODICA));
	}
	void eliminarUsuario(Usuario usuario) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_USUARIOS] = { usuario.getIDUsaurio(),
			usuario.getNombre(),usuario.getApellido_Paterno(),usuario.getApellido_Materno(),
			usuario.getContrasena(),usuario.getFechaRegistro(),usuario.getMontoAhorrado(),
			usuario.getSexo(),usuario.getFechaNacimiento(),usuario.getTelefono(),
			usuario.getCodigoPais(),usuario.getPais(),usuario.getMonedaPatron().toString() };
		ejecutarRegistroEnDB(generarConsulta(usuario.getIDUsaurio(),
			NOMBRE_COLUMNAS_USUARIO[0],
			NOMBRE_TABLA_USUARIOS));
	}
	void eliminarRespuesta(Respuesta respuesta) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_RESPUESTAS] = {
			respuesta.getUsuario().getIDUsaurio(),
			respuesta.getTransaccionConsultada().getIDTransaccion(),
			respuesta.getOpcionSeleccionada().getID_Opcion() };
		ejecutarRegistroEnDB(generarConsulta(respuesta.getUsuario().getIDUsaurio(),
			NOMBRE_COLUMNAS_RESPUESTA[0],
			NOMBRE_TABLA_RESPUESTA));
	}
	void eliminarPresupuesto(Presupuesto presupuesto) override {
		string entrada[CANTIDAD_ARGUMENTOS_TABLA_PRESUPUESTOS] = {
		presupuesto.getIDPresupuesto(),
		presupuesto.getCategoria(), 
		presupuesto.getSubCategoria(),
		to_string(presupuesto.getMontoLim()),
		presupuesto.getTipo()};
		ejecutarRegistroEnDB(generarConsulta(
				presupuesto.getIDPresupuesto(),
				NOMBRE_COLUMNAS_PRESUPUESTO[0],
				NOMBRE_TABLA_PRESUPUESTOS));
	}
	/*
	*/
	Transaccion buscarTransaccion(string ID_Transaccion, Usuario usuario) {
		string valores[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES] = {};
		for (int i = 0; i < CANTIDAD_ARGUMENTOS_TABLA_TRANSACCIONES; i++) {
			valores[i] = ejecutarConsulta(generarConsulta(
				NOMBRE_TABLA_TRANSACCIONES,ID_Transaccion,
				NOMBRE_COLUMNAS_TRANSACCION[i],	
				NOMBRE_COLUMNAS_TRANSACCION[0]));
		}
		return Transaccion(
			valores,usuario,
			buscarMoneda(valores[7]), 
			Fecha(valores[1]));
	}
	TransaccionTemporalidadFija buscarTransaccionFija(string ID_Transaccion, 
			Usuario usuario) {
		string valores[CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA] = {};
		for (int i = 0; i < CANTIDAD_ARGUMENTOS_TABLA_TRANSACCION_FIJA; i++) {
			valores[i] = ejecutarConsulta(generarConsulta(
				NOMBRE_TABLA_TRANSACCION_FIJA, ID_Transaccion,
				NOMBRE_COLUMNAS_TRANSACCION_FIJA[i],
				NOMBRE_COLUMNAS_TRANSACCION_FIJA[0]));
		}
		Transaccion transaccion = buscarTransaccion(valores[0],usuario);
		return TransaccionTemporalidadFija(
			stof(valores[1]),  
			valores[0], 
			transaccion.getTipoTransaccion(),
			transaccion.getCategoria(), 
			transaccion.getSubCategoria(),
			transaccion.getGlosa(), 
			transaccion.getTemporalidad(), 
			transaccion.getTipoRepeticion(),
			transaccion.getMonedaRegistro(),
			usuario,
			transaccion.getFechaRegistro());
	}
	TransaccionTemporalidadVariable buscarTransaccionVariable(string ID_Transaccion) {

	}
	TransaccionPeriodica buscarTransaccionPeriodica(string ID_Transaccion) {

	}
	Usuario buscarUsuario(string ID_Usuario) {

	}
	Respuesta buscarRespuesta(string ID_Usuario, string ID_Transaccion, string ID_Opcion) {

	}
	Opcion buscarOpcion(string ID_Pregunta, string ID_Opcion) {

	}
	Pregunta buscarPregunta(string ID_Pregunta) {

	}
	Moneda buscarMoneda(string ID_Moneda) {

	}
};

string ConexionDBSQLServer::generarSeparadoresCasoInsert(int large) {
	string asteriscos = "";
	string baseStatement = "INSER INTO + ";
	for (int i = 0; i < large; i++) asteriscos = asteriscos + "*,";
	asteriscos = asteriscos.substr(0, asteriscos.length() - 1);
	return baseStatement + "(" + asteriscos + "); ";
}
string ConexionDBSQLServer::generarSeparadoresCasoUpdate(int large) {
	string asteriscos = "";
	string baseStatement = "UPDATE + SET ";
	for (int i = 0; i < large-1; i++) asteriscos = asteriscos + "$ = *, ";
	asteriscos = asteriscos.substr(0, asteriscos.length() - 2);
	return baseStatement + asteriscos + " WHERE % = *;";
}
string ConexionDBSQLServer::generarConsulta(int large,string tableName, string elementos[]) {
	string baseStatement = generarConsultaCaseInsert(elementos,
		generarSeparadoresCasoInsert(large));
	baseStatement.replace(baseStatement.find("+"), 1, tableName);
	return baseStatement;
}
string ConexionDBSQLServer::generarConsulta(int large, string tableName, string elementos[], 
	string columnName[]) {
	string baseStatement = generarConsultaCaseUpdate(elementos, columnName,
		generarSeparadoresCasoUpdate(large));
	baseStatement.replace(baseStatement.find("+"), 1, tableName);
	return baseStatement;
}
string ConexionDBSQLServer::generarConsulta(string elementID, string columnElementID,
	string tableName) {
	string baseStatement = "DELETE + WHERE * = ?";
	baseStatement.replace(baseStatement.find("*"), 1, elementID);
	baseStatement.replace(baseStatement.find("%"), 1, columnElementID);
	baseStatement.replace(baseStatement.find("+"), 1, tableName);
	return baseStatement;
}

string ConexionDBSQLServer::generarConsulta(string tableName, string elementID,
		string columnName, string columnElementID){
	string baseStatement = "SELECT * FROM + WHERE % = $";
	baseStatement.replace(baseStatement.find("$"), 1, elementID);
	baseStatement.replace(baseStatement.find("*"), 1, columnName);
	baseStatement.replace(baseStatement.find("%"), 1, columnElementID);
	baseStatement.replace(baseStatement.find("+"), 1, tableName);
	return baseStatement;
}

class FactoryConexionDB {
public:
	static ConexionDB getConexionSQL();
};

void main() {

}

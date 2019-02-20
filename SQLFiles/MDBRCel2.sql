CREATE DATABASE IF NOT EXISTS TiendaCelular;

CREATE TABLE IF NOT EXISTS Documentos (
  idDocumentos VARCHAR(8) NOT NULL,
  filePath VARCHAR(45),
  PRIMARY KEY (idDocumentos))
  
CREATE TABLE IF NOT EXISTS Sucursal (
  idSucursal VARCHAR(8) NOT NULL,
  ubicacion VARCHAR(45),
  nombre VARCHAR(45),
  PRIMARY KEY (idSucursal))
  
CREATE TABLE IF NOT EXISTS Compras (
  idCompras VARCHAR(8) NOT NULL,
  Descripcion VARCHAR(45),
  Estatus VARCHAR(45),
  Cliente_idClientes VARCHAR(8),
  Documentos_idDocumentos VARCHAR(8),
  Sucursal_idSucursal VARCHAR(8),
  Solicitudes_idSolicitudes VARCHAR(8),
  PRIMARY KEY (idCompras, Clientes_idClientes, Documentos_idDocumentos, Sucursal_idSucursal),
  CONSTRAINT fk_Compras_Documentos1
    FOREIGN KEY (Documentos_idDocumentos)
    REFERENCES Documentos (idDocumentos)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT fk_Compras_Sucursal1
    FOREIGN KEY (Sucursal_idSucursal)
    REFERENCES Sucursal (idSucursal)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
  CONSTRAINT fk_Compras_Clientes1
  	FOREIGN KEY (Clientes_idClientes)
  	REFERENCES Clientes (idClientes)
  	ON DELETE NO ACTION
  	ON UPDATE NO ACTION,
  CONSTRAINT fk_Solicitudes_Solicitudes1
  	FOREIGN KEY (Solicitudes_idSolicitudes)
  	REFERENCES Solicitudes (idSolicitudes)
  	ON DELETE NO ACTION
  	ON UPDATE NO ACTION,

CREATE TABLE IF NOT EXISTS Solicitudes (
  idSolicitudes VARCHAR(8) NOT NULL,
  Descripcion VARCHAR(45),
  locationkey VARCHAR(45),
  PRIMARY KEY (idSolicitudes))
  
CREATE TABLE IF NOT EXISTS Celulares (
  idCelulares VARCHAR(8) NOT NULL,
  Nombre VARCHAR(45),
  Camara VARCHAR(45),
  Carga VARCHAR(45),
  Pantalla VARCHAR(45),
  Dimensiones VARCHAR(45),
  Resolucion VARCHAR(45),
  Peso VARCHAR(45),
  Tec VARCHAR(45) ,
  Imagen VARCHAR(45),
  Memoria VARCHAR(45),
  OS VARCHAR(45),
  PRIMARY KEY (idCelulares))
  
CREATE TABLE IF NOT EXISTS Clientes (
  idClientes VARCHAR(8) NOT NULL,
  Apellido VARCHAR(45),
  Nombre VARCHAR(45),
  Calle VARCHAR(45),
  Ciudad VARCHAR(45),
  Colonia VARCHAR(45),
  CodigoPostal VARCHAR(45),
  numExterior VARCHAR(45),
  Telefono VARCHAR(45),
  Payment_Info VARCHAR(45),
  Contrasenia VARCHAR(45),
  Solicitudes_idSolicitudes VARCHAR(8),
  PRIMARY KEY (idClientes),

    
CREATE TABLE IF NOT EXISTS confirmacion_Documento (
  fechaLlegada VARCHAR(8) NOT NULL,
  idConfirmación VARCHAR(45),
  Documentos_idDocumentos VARCHAR(8),
  CONSTRAINT fk_confirmacion_Documento_Documentos1
    FOREIGN KEY (Documentos_idDocumentos)
    REFERENCES Documentos (idDocumentos)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
    
CREATE TABLE IF NOT EXISTS rechazo_Documento (
  motivoRechazo VARCHAR(45) ,
  Documentos_idDocumentos VARCHAR(8),
  CONSTRAINT fk_table2_Documentos1
    FOREIGN KEY (Documentos_idDocumentos)
    REFERENCES Documentos (idDocumentos)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)

CREATE TABLE IF NOT EXISTS Solicitudes_has_Celulares (
  Solicitudes_idSolicitudes VARCHAR(8) NOT NULL,
  Celulares_idCelulares VARCHAR(8) NOT NULL,
  cardinalidadCelular INT ,
  PRIMARY KEY (Solicitudes_idSolicitudes, Celulares_idCelulares),
  CONSTRAINT fk_Solicitudes_has_Celulares_Solicitudes1
    FOREIGN KEY (Solicitudes_idSolicitudes)
    REFERENCES Solicitudes (idSolicitudes)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT fk_Solicitudes_has_Celulares_Celulares1
    FOREIGN KEY (Celulares_idCelulares)
    REFERENCES Celulares (idCelulares)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
    
CREATE TABLE IF NOT EXISTS Sucursal_has_Celulares (
  Sucursal_idSucursal VARCHAR(8) NOT NULL,
  Celulares_idCelulares VARCHAR(8) NOT NULL,
  cardinalidadCelular INT ,
  PRIMARY KEY (Sucursal_idSucursal, Celulares_idCelulares),
  CONSTRAINT fk_Sucursal_has_Celulares_Sucursal1
    FOREIGN KEY (Sucursal_idSucursal)
    REFERENCES Sucursal (idSucursal)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT fk_Sucursal_has_Celulares_Celulares1
    FOREIGN KEY (Celulares_idCelulares)
    REFERENCES Celulares (idCelulares)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)

CREATE TABLE IF NOT EXISTS Clientes_has_Solicitudes(
  Cliente_idClientes VARCHAR(8) NOT NULL,
  Solicitudes_idSolicitudes VARCHAR(8) NOT NULL,
  PRIMARY KEY (Cliente_idClientes, Solicitudes_idSolicitudes),
  CONSTRAINT fk_Clientes_has_Solicitudes_Clientes1
    FOREIGN KEY (Cliente_idClientes)
    REFERENCES Clientes (idClientes)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT fk_Clientes_has_Solicitudes_Solicitudes1
    FOREIGN KEY (Solicitudes_idSolicitudes)
    REFERENCES Solicitudes (idSolicitudes)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)